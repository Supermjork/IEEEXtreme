#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> count_map;
        bool hasDupe = false;

        for (int x : nums)
        {
            count_map[x]++;
        }

        for (const auto& pair: count_map)
        {
            if (pair.second > 1)
            {
                hasDupe = true;
                break;
            }
        }

        cout << hasDupe;
        return hasDupe;
    }
};