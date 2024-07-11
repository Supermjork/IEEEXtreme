#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_chars;
        unordered_map<char, int> t_chars;

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        for (char c : s)
        {
            s_chars[c]++;
        }

        for (char c : t)
        {
            t_chars[c]++;
        }

        return (s_chars == t_chars);
    }
};