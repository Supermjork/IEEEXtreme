#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<vector<int>> generate_subsets(vector<int> set)
{
    vector<vector<int>> subsets = {{}};

    for (int x : set)
    {
        int n = subsets.size();

        for (int i = 0; i < n; i++)
        {
            vector<int> ss = subsets[i];
            ss.push_back(x);

            subsets.push_back(ss);
        }
    }

    vector<vector<int>> filtered;

    for(const auto& subset : subsets)
    {
        if (subset.size() >= 2)
        {
            filtered.push_back(subset);
        }
    }

    return filtered;
}

void print_set(vector<vector<int>> set)
{
    for (int i = 0; i < set.size(); i++)
    {
        for (int j = 0; j < set[i].size(); j++)
        {
            cout << set[i][j] << ' ';
        }

        cout << endl;
    }
}

int max_in_vec(vector<int> vec)
{
    int max_num = vec[0];

    for (int x : vec)
    {
        max_num = max(max_num, x);
    }

    return max_num;
}

int min_element(vector<int> vec)
{
    int min_num = vec[0];

    for (int x : vec)
    {
        min_num = min(min_num, x);
    }

    return min_num;
}

vector<int> grab_max(vector<vector<int>> sets)
{
    vector<int> maximums;

    for (const auto& subset : sets)
    {
        maximums.push_back(max_in_vec(subset));
    }

    return maximums;
}

int main()
{
    int test_cases;

    cin >> test_cases;

    while (test_cases--)
    {
        int n, k;

        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        vector<vector<int>> subsets = generate_subsets(nums);

        vector<int> maximums = grab_max(subsets);

        k = min_element(maximums) - 1;

        cout << k << endl;
    }

    return 0;
}
