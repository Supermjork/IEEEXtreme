#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

bool canLightStreet(double radius, const std::vector<int>& positions, double streetLength) {
    int n_lanterns = positions.size();

    if (positions[0] - radius > 0 || positions[n_lanterns - 1] + radius < streetLength) {
        return false;
    }

    for (int i = 1; i < n_lanterns; i++) {
        if (positions[i] - positions[i - 1] > 2 * radius) {
            return false;
        }
    }

    return true;
}

int main()
{
    int n_lanterns, l_street;

    cin >> n_lanterns >> l_street;

    vector<int> lantern_pos(n_lanterns);

    for (int i = 0; i < n_lanterns; i++)
    {
        cin >> lantern_pos[i];
    }

    sort(lantern_pos.begin(), lantern_pos.end());

    int r = max(lantern_pos[0], l_street - lantern_pos[n_lanterns - 1]) * 2;

    for (int i = 1; i < n_lanterns; i ++)
    {
        r = max(r, lantern_pos[i] - lantern_pos[i - 1]);
    }

    cout << fixed << setprecision(10) << (double) r / 2.0 << endl;

    return 0;
}
