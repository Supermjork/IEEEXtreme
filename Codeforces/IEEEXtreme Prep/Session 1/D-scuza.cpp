#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long sum_until(vector<long long> iterable, int idx)
{
    long long sum = 0;

    for (int i = 0; i < idx; i++)
    {
        sum += iterable[i];
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n_steps, n_questions;
        cin >> n_steps >> n_questions;

        vector<long long> heights(n_steps);

        vector<int> questions(n_questions);

        for (int i = 0; i < n_steps; i++)
        {
            cin >> heights[i];
        }

        for (int i = 0; i < n_questions; i++)
        {
            cin >> questions[i];
            questions[i]++;
        }

        for (int i = 0; i < n_questions; i++)
        {
            int diff_idx = lower_bound(heights.begin(), heights.end(), questions[i]) - heights.begin();

            long long max_h = sum_until(heights, diff_idx);

            cout << max_h << ' ';
        }

        cout << '\n';
    }

    return 0;
}
