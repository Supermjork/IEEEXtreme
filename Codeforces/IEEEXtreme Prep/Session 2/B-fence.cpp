#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n_planks, piano_width;

    cin >> n_planks >> piano_width;

    vector<int> plank_heights(n_planks);

    for (int i = 0; i < n_planks; i++)
    {
        cin >> plank_heights[i];
    }

    // ik for a fact it'll be a sliding window
    // with the size of the piano..
    int min_sum, window_start;
    min_sum = INT_MAX;
    window_start = 0;

    for (int i = 0; i < n_planks - piano_width; i++)
    {
        int inter_sum = 0;

        for (int j = i; j < i + piano_width; j++)
        {
            inter_sum += plank_heights[j];
        }

        if (inter_sum < min_sum)
        {
            window_start = i;
            min_sum = inter_sum;
        }
    }

    cout << window_start + 1;

    return 0;
}
