#include <map>
#include <string>
#include <vector>
#include "MaxMap.hpp"
#include <iostream>

int main(){
    std::map<std::string, std::vector<float>> data;
    data["la"]={};
    data["da"]={};

    std::map<std::string, float> data2;
    data2=returnMaxMap(data);
    std::cout<<std::to_string(data2["da"]);
    return 0;
}