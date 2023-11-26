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

    void set(string key, string value, int timestamp);

    string get(string key, int timestamp);

};

