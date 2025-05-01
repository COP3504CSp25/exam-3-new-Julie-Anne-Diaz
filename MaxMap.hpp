#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    auto ok = data.find(search_term);
    if (ok==data.end()){
        return -1;
    }
    std::vector<float> nums = data.at(search_term);
    if (nums.size()==0){
        return -1;
    }
    float max=nums[0];
    for (size_t i = 1; i < nums.size(); i++){
        if (max < nums[i]){
            max=nums[i];
        }
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    std::map<std::string, float> returnMap;
    std::map<std::string, std::vector<float>>::const_iterator i;
    for(i = in_map.begin();i!=in_map.end(); i++){
        returnMap[i->first]=consultMax(i->first, in_map);
    }
    return returnMap;
}