/*
Resembla: Word-based Japanese similar sentence search library
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

#ifndef __SVR_PREDICTOR_HPP__
#define __SVR_PREDICTOR_HPP__

#include <string>
#include <vector>

#include <libsvm/svm.h>

#include "../feature.hpp"

namespace resembla {

// LibSVM wrapper for Resembla
class SVRPredictor
{
public:
    static const std::string DEFAULT_NAME;

    const std::string name;

    SVRPredictor(const std::vector<Feature::key_type>& feature_definitions,
            const std::string model_file_path, const std::string name = DEFAULT_NAME);
    virtual ~SVRPredictor();

    double operator()(const FeatureMap& x) const;

protected:
    const std::vector<Feature::key_type> feature_definitions;
    svm_model *model;

    std::vector<svm_node> toNodes(const FeatureMap& x) const;
};

}
#endif
