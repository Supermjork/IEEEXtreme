#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n, m;
    char colour;

    cin >> n >> m >> colour;

    vector<vector<char>> layout(n, vector<char>(m));
    unordered_set<char> set;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> layout[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (layout[i][j] == colour)
            {
                if (i != 0)
                {
                    if (layout[i - 1][j] != '.' && layout[i - 1][j] != colour)
                    {
                        set.insert(layout[i - 1][j]);
                    }
                }
                if (i != n - 1)
                {
                    if (layout[i + 1][j] != '.' && layout[i + 1][j] != colour)
                    {
                        set.insert(layout[i + 1][j]);
                    }
                }
                if (j != 0)
                {
                    if (layout[i][j - 1] != '.' && layout[i][j - 1] != colour)
                    {
                        set.insert(layout[i][j - 1]);
                    }
                }
                if (j != m - 1)
                {
                    if (layout[i][j + 1] != '.' && layout[i][j + 1] != colour)
                    {
                        set.insert(layout[i][j + 1]);
                    }
                }
            }
        }
    }

    cout << set.size() << '\n';

    return 0;
}