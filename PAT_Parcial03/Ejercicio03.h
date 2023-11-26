#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include <map>>

using std::string;

using namespace std;

class TimeMap
{

private:
    struct Pair
	{
		string value;
		int timestamp;
	};

	unordered_map<string, vector<Pair>> map;

public:
    TimeMap();
	~TimeMap();

    void set(std::string key, std::string value, int timestamp);

    std::string get(std::string key, int timestamp);

};

