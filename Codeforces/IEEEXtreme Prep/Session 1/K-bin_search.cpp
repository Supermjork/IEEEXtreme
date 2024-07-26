#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int> arr_0(n);
    vector<int> arr_1(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr_0[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr_1[i];
    }

    sort(arr_0.begin() , arr_0.end());

    for (int i = 0; i < m; i++)
    {
        cout << upper_bound(arr_0.begin(), arr_0.end(), arr_1[i]) - arr_0.begin() << " ";
    }

    return 0;
}
