/*
Resembla
https://github.com/tuem/resembla

Copyright 2017 Takashi Uemura

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef RESEMBLA_RESEMBLA_REGRESSION_HPP
#define RESEMBLA_RESEMBLA_REGRESSION_HPP

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

#include <json.hpp>

#include "resembla_interface.hpp"
#include "csv_reader.hpp"
#include "eliminator.hpp"
#include "reranker.hpp"

#include "regression/feature.hpp"
#include "regression/extractor/feature_extractor.hpp"

namespace resembla {

template<typename Database, typename ScoreFunction>
class ResemblaRegression: public ResemblaInterface
{
public:
    ResemblaRegression(
            std::shared_ptr<Database> database,
            std::shared_ptr<FeatureExtractor> feature_extractor,
            std::shared_ptr<ScoreFunction> score_func,
            const std::string& index_path, size_t max_candidate):
        database(database), preprocess(feature_extractor), score_func(score_func),
        max_candidate(max_candidate)
    {
        for(const auto& columns: CsvReader<std::string>(index_path, 2)){
            const auto& original = cast_string<string_type>(columns[1]);

            if(columns.size() > 2){
                const auto& features = columns[2];
                nlohmann::json j = nlohmann::json::parse(features);
                typename FeatureExtractor::output_type preprocessed;
                for(nlohmann::json::iterator i = std::begin(j); i != std::end(j); ++i){
                    preprocessed[i.key()] = i.value();
                }
                corpus_features[original] = preprocessed;
            }
            else{
                corpus_features[original] = (*preprocess)(original, "");
            }
        }
    }

    void append(const std::string& name, const std::shared_ptr<ResemblaInterface> resembla)
    {
        resemblas[name] = resembla;
    }

    std::vector<output_type> find(const string_type& query, double threshold = 0.0, size_t max_response = 0) const
    {
        return eval(query, database->search(query, max_candidate), threshold, max_response);
    }

    std::vector<output_type> eval(const string_type& query, const std::vector<string_type>& candidates,
            double threshold = 0.0, size_t max_response = 0) const
    {
        std::unordered_map<string_type, StringFeatureMap> candidate_features;
        for(const auto& c: candidates){
            auto i = corpus_features.find(c);
            if(i != std::end(corpus_features)){
                candidate_features[c] = i->second;
            }
            else{
                candidate_features[c] = (*preprocess)(c);
            }
        }

        for(const auto& p: resemblas){
            for(const auto& r: p.second->eval(query, candidates, 0.0, 0)){
                candidate_features.at(r.text)[p.first] = Feature::toText(r.score);
            }
        }

        WorkData input_data = std::make_pair(query, (*preprocess)(query));
        std::vector<ResemblaInterface::output_type> results;
        for(const auto& r: reranker.rerank(input_data,
                std::begin(candidate_features), std::end(candidate_features),
                *score_func, threshold, max_response)){
            results.push_back({r.first, score_func->name, std::max(std::min(r.second, 1.0), 0.0)});
        }

        return results;
    }

protected:
    using WorkData = std::pair<string_type, typename FeatureExtractor::output_type>;

    std::unordered_map<string_type, typename FeatureExtractor::output_type> corpus_features;

    const std::shared_ptr<Database> database;
    const std::shared_ptr<FeatureExtractor> preprocess;
    const std::shared_ptr<ScoreFunction> score_func;

    std::unordered_map<std::string, std::shared_ptr<ResemblaInterface>> resemblas;

    const size_t max_candidate;
    const Reranker<string_type> reranker;
};

}
#endif
