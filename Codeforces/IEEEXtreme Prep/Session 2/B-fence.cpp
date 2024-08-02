#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n_planks, piano_width, inter_sum, min_sum, window_start;
    min_sum = INT_MAX;
    inter_sum = 0;
    window_start = 1;

    cin >> n_planks >> piano_width;

    vector<int> plank_heights(n_planks + 1);
    plank_heights.push_back(0);

    for (int i = 1; i <= n_planks; i++)
    {
        cin >> plank_heights[i];

        inter_sum += plank_heights[i];

        if (i == piano_width)
        {
            min_sum = inter_sum;
            window_start = i - piano_width;
        }

        if (i > piano_width)
        {
            inter_sum -= plank_heights[i - piano_width];

            if (inter_sum < min_sum)
            {
                min_sum = inter_sum;
                window_start = i - piano_width + 1;
            }
        }
    }

    cout << window_start;

    return 0;
}
