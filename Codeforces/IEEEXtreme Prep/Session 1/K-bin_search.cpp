#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int arr_0[n];
    int arr_1[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr_0[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr_1[i];
    }

    sort(arr_0 , arr_0 + n);

    for (int i = 0; i < m; i++)
    {
        int res = upper_bound(arr_0, arr_0 + n, arr_1[i]) - arr_0;
        cout << res << " ";
    }

    return 0;

}
