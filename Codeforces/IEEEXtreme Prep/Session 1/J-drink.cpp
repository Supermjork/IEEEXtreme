#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;

    cin >> n;

    int prices[n];

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

    sort(prices, prices + n);

    for (int i = 0; i < q; i++)
    {
        int res = upper_bound(prices, prices + n, m_coins[i]) - prices;
        cout << res << " ";
    }

    return 0;
}
