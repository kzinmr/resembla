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

#ifndef RESEMBLA_WORD_VECTOR_WEIGHT_HPP
#define RESEMBLA_WORD_VECTOR_WEIGHT_HPP

#include "../word_vector.hpp"

namespace resembla {

template<typename string_type, typename value_type = double, typename id_type = long>
struct WordVectorWeight
{
    double operator()(const WordVector<string_type, value_type, id_type>& w, bool is_original = false,
            size_t total = -1, size_t position = -1) const
    {
        return w.surface.length();
    }
};

}
#endif