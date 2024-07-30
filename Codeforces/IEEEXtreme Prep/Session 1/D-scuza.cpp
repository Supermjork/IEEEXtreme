#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long sum_until(vector<long long> iterable, int q)
{
    long long sum = 0;

    for (int i = 0; i < iterable.size(); i++)
    {
        if (q >= iterable[i])
        {
            sum += iterable[i];
        }
        else
        {
            break;
        }
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
        }

        for (int i = 0; i < n_questions; i++)
        {
            long long max_h = sum_until(heights, questions[i]);

            cout << max_h << ' ';
        }

        cout << '\n';
    }

    return 0;
}
