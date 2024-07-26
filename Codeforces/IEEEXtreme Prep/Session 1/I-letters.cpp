#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> room_dorm(n);
    vector<int> letters(m);

    cin >> room_dorm[0];

    for (int i = 1; i < n; i++)
    {
        cin >> room_dorm[i];
        room_dorm[i] += room_dorm[i - 1];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> letters[i];
    }

    for (int i = 0; i < m; i++)
    {
        int dorm_idx = lower_bound(room_dorm.begin(), room_dorm.end(), letters[i]) - room_dorm.begin();

        // Missing room offset

        cout << dorm_idx + 1 << ' ';
    }

    return 0;
}
