#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        int comp;

        for (int i = 0; i < nums.size(); i++)
        {
            comp = target - nums[i];

            if (num_map.count(comp))
            {
                return {num_map[comp], i};
            }

            num_map[nums[i]] = i;
        }

        return {};
    }
};
