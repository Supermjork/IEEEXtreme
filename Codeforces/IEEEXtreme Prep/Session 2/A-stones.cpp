#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n_stones, n_questions;
    cin >> n_stones;

    vector<long long> prices(n_stones);
    vector<long long> cheaps(n_stones);

    for (int i = 0; i < n_stones; i++)
    {
        cin >> prices[i];
        cheaps[i] = prices[i];
    }

    sort(cheaps.begin(), cheaps.end());

    for (int i = 1; i < n_stones; i++)
    {
        prices[i] += prices[i - 1];
        cheaps[i] += cheaps[i - 1];
    }

    cin >> n_questions;

    while(n_questions--)
    {
        int type, lower_bound, higher_bound;
        cin >> type >> lower_bound >> higher_bound;

        lower_bound--;
        higher_bound--;

        if (type == 1)
        {
            if (lower_bound == 0)
            {
                cout << prices[higher_bound] << endl;
            }
            else
            {
                cout << prices[higher_bound] - prices[lower_bound - 1] << endl;
            }
        }
        else
        {
            if (lower_bound == 0)
            {
                cout << cheaps[higher_bound] << endl;
            }
            else
            {
                cout << cheaps[higher_bound] - cheaps[lower_bound - 1] << endl;
            }
        }
    }

    return 0;
}
