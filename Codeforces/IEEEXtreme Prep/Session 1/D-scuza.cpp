#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n_steps, n_questions;
        cin >> n_steps >> n_questions;

        vector<int> h_differences;
        vector<long long> heights;

        heights.push_back(0);

        for (int i = 0; i < n_steps; i++)
        {
            int x;

            cin >> x;

            heights.push_back(heights.back() + x);

            if (i == 0)
            {
                h_differences.push_back(x);
            }
            else
            {
                h_differences.push_back(max(h_differences.back(), x));
            }
        }

        for (int i = 0; i < n_questions; i++)
        {
            int q;

            cin >> q;

            int idx = upper_bound(h_differences.begin(), h_differences.end(), q) - h_differences.begin();

            cout << heights[idx] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
