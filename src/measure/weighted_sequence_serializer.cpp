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

#include "weighted_sequence_serializer.hpp"

namespace resembla {

void to_json(nlohmann::json& j, const typename WeightedSequenceBuilder<RomajiSequenceBuilder, RomajiMatchWeight>::token_type& o) {
    j = nlohmann::json{{"token", cast_string<std::string>(string_type(1, o.token))}, {"weight", o.weight}};
}

void from_json(const nlohmann::json& j, typename WeightedSequenceBuilder<RomajiSequenceBuilder, RomajiMatchWeight>::token_type& o) {
    o.token = cast_string<RomajiSequenceBuilder::output_type>(j.at("token").get<std::string>())[0];
    o.weight = j.at("weight").get<double>();
}

}