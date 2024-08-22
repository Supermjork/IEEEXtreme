#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, k, t, mask_val, waste_itr, base_val;

    cin >> n >> m >> k >> t;

    mask_val  = 0;
    waste_itr = 0;
    base_val  = 0;


    vector<pair<int, int>> wastes(k);
    vector<vector<int>> field(n, vector<int>(m));
    vector<vector<int>> mask (n, vector<int>(m));

    // %3 involved

    for (int i = 0; i < k; i++)
    {
        cin >> wastes[i].first >> wastes[i].second;
    }

    sort(wastes.begin(), wastes.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == wastes[waste_itr].first && j == wastes[waste_itr].second)
            {
                mask_val++;
                waste_itr++;
                mask[i][j] = -3;
            }
            i++;
            j++;
            mask[i][j] = mask_val;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            field[i][j] = base_val % 3;
            base_val++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            field[i][j] += mask[i][j];
            field[i][j] %= 3;
        }
    }
}
