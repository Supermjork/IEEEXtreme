#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;

    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cin >> q;

    int m_coins[q];

    for (int i = 0; i < q; i++)
    {
        cin >> m_coins[i];
    }

    sort(prices.begin(), prices.end());

    for (int i = 0; i < q; i++)
    {
        cout << upper_bound(prices.begin(), prices.end(), m_coins[i]) - prices.begin() << " ";
    }

    return 0;
}
