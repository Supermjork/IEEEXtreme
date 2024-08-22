#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n, m, k, t;

    cin >> n >> m >> k >> t;

    map<int, vector<int>> waste;
    map<int, int> beg;

    for (int i = 1; i <= n; i++)
    {
        waste[i].clear();
    }

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;

        waste[a].push_back(b);
    }

    for (auto &[k, v] : waste)
    {
        sort(v.begin(), v.end());
    }

    beg[1] = 0;

    int shifts = m % 3;

    for (int i = 2; i <= n; i++)
    {
        beg[i]  = (beg[i - 1] + shifts) % 3;
    }

    for (int i = 0; i < t; i++)
    {
        int a, b, pos, cur_pos;
        long long num;

        cin >> a >> b;

        num = 0;
        pos = 0;
        cur_pos = 0;

        if (binary_search(waste[a].begin(), waste[a].end(), b))
        {
            cout << "Waste\n";
            continue;
        }

        for (auto [k, v] : waste)
        {
            if (k == a)
            {
                break;
            }

            num += v.size();
        }

        if (!waste[a].empty())
        {
            pos = lower_bound(waste[a].begin(), waste[a].end(), b) - waste[a].begin();

            num += pos;
        }

        num %= 3;

        shifts  = (b - 1) % 3;

        int cur_pos;
        cur_pos  = (beg[a] + shifts) % 3;
        cur_pos -= num;
        cur_pos += 3;
        cur_pos %= 3;

        if (cur_pos == 0)
        {
            cout << "Carrots\n";
        }
        else if (cur_pos == 1)
        {
            cout << "Kiwis\n";
        }
        else
        {
            cout << "Grapes\n";
        }
    }

    return 0;
}
