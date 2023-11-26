#include "Ejercicio03.h"

TimeMap::TimeMap() {
   
}

TimeMap::~TimeMap() {
	for(auto& pair : map) {
		pair.second.clear();
	}

    map.clear();
}

void TimeMap::set(std::string key, std::string value, int timestamp) {
    map[key].emplace_back(Pair{value, timestamp});
}

string TimeMap::get(std::string key, int timestamp) {
    if(map.find(key) == map.end()) return "";
    
    const auto& values = map[key];

    int top = values.size();
    int bot = 0;
    int mid = 0;

    if(values[bot].timestamp > timestamp) return "";
    if(values[top - 1].timestamp <= timestamp) return values[top - 1].value;

    while(bot < top) {
		mid = bot + (top - bot) / 2;

		if(values[mid].timestamp <= timestamp) {
			bot = mid + 1;
		} else {
			top = mid;
		}
	}

    return values[mid].value;
}

