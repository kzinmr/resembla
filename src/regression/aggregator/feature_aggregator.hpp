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

#ifndef __FEATURE_AGGREGATOR_HPP__
#define __FEATURE_AGGREGATOR_HPP__

#include <unordered_map>
#include <memory>
#include <initializer_list>

#include <resembla/string_util.hpp>

#include "../feature.hpp"

namespace resembla {

class FeatureAggregator
{
public:
    using input_type = StringFeatureMap;
    using output_type = FeatureMap;

    struct Function
    {
        virtual Feature::real_type operator()(const Feature::text_type& a, const Feature::text_type& b) const = 0;
    };

    template<class F>
    struct StringsToRealFunction: public Function
    {
        StringsToRealFunction(){}
        StringsToRealFunction(F f): f(f){}

        Feature::real_type operator()(const Feature::text_type& a, const Feature::text_type& b) const
        {
            return f(Feature::toReal(a), Feature::toReal(b));
        }

    private:
        F f;
    };

    void append(Feature::key_type key, std::shared_ptr<Function> func);

    output_type operator()(const input_type& a, const input_type& b) const;

protected:
    std::unordered_map<Feature::key_type, std::shared_ptr<Function>> functions;
};

}
#endif
