#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sorted_anagrams;
        string t;

        for (const auto& s: strs)
        {
            t = s;

            std::sort(t.begin(), t.end());

            sorted_anagrams[t].push_back(s);
        }

        vector<vector<string>> res;

        for (const auto& [key, value] : sorted_anagrams)
        {
            res.push_back(value);
        }

        return res;
    }
};
