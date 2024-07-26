#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> room_dorm(n);
    vector<long long> letters(m);

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
        long long dorm_idx, room_no;

        // Dorm Indexing
        // Finding which dorm the letter may lie within
        dorm_idx = lower_bound(room_dorm.begin(), room_dorm.end(), letters[i]) - room_dorm.begin();

        // Missing room offset
        if (dorm_idx == 0)
        {
            room_no = letters[i];
        }
        else
        {
            room_no = letters[i] - room_dorm[dorm_idx - 1];
        }

        cout << dorm_idx + 1 << ' ' << room_no << endl;
    }

    return 0;
}
