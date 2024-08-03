#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n_sides;
    bool trianglable = false;

    cin >> n_sides;

    vector<int> sides(n_sides);

    for (int i = 0; i < n_sides; i++)
    {
        cin >> sides[i];
    }

    sort(sides.begin(), sides.end());

    for (int i = 0; i < n_sides - 2; i++)
    {
        if (sides[i] + sides[i + 1] > sides[i + 2])
        {
            trianglable = true;
            break;
        }
    }

    (trianglable) ? cout << "Yes" : cout << "No";

    return 0;
}
