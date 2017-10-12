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

#ifndef RESEMBLA_HISTORY_HPP
#define RESEMBLA_HISTORY_HPP

#include <time.h>
#include <chrono>
#include <string>
#include <vector>
#include <iostream>

namespace resembla {

class History
{
public:
    History();

    void record(const std::string& task, int count = 1);
    void dump(std::ostream& os = std::cout) const;

private:
    struct TimeRecord
    {
        std::chrono::system_clock::time_point time;
        std::string task;
        int count;
    };

    std::vector<TimeRecord> time_records;
};

}
#endif
