#ifndef MY_CPP_STD_COMMON_H
#define MY_CPP_STD_COMMON_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

namespace common{
    std::vector<std::string> Split(std::string line, char flag){
        std::vector<std::string> ret;
        size_t start = 0;
        size_t index = line.find_first_of(flag, start);
        while (index != std::string::npos){
            ret.push_back(line.substr(start, index));
            start = index + 1;
            index = line.find_first_of(flag, start);
        }
        ret.push_back(line.substr(start, index));
        return ret;
    }
    float Sigmod(float inx){
        return 1 / (1 + exp(-inx));
    }





} // comm

#endif //MY_CPP_STD_COMMON_H
