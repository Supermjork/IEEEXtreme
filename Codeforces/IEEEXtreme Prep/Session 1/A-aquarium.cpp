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
        int n_cols, x_max_water, min_h, max_h, optim_h;
        long long vol;

        min_h = 0;
        max_h = INT_MAX;
        optim_h = 0;

        cin >> n_cols >> x_max_water;

        vector<int> columns(n_cols);

        for (int i = 0; i < n_cols; i++)
        {
            cin >> columns[i];
        }

        while (min_h <= max_h)
        {
            int tmp_h = min_h + (max_h - min_h) / 2;
            vol = 0;

            for (int i = 0; i < n_cols; i++)
            {
                vol += (tmp_h > columns[i]) * (tmp_h - columns[i]);
            }

            if (vol <= x_max_water)
            {
                optim_h = tmp_h;
                min_h = optim_h + 1;
            }
            else
            {
                max_h = tmp_h - 1;
            }
        }

        cout << optim_h << '\n';
    }

    return 0;
}
