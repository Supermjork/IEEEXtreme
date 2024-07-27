#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n_bells, n_boxes, diff, max_size;

    cin >> n_bells >> n_boxes;

    diff = n_bells - n_boxes;

    vector<int> bells(n_bells);

    for (int i = 0; i < n_bells; i++)
    {
        cin >> bells[i];
    }

    max_size = bells[n_bells - 1];

    for (int i = 0; i < diff; i++)
    {
        int bell_pair = bells[i] + bells[2 * diff  - i - 1];

        if (bell_pair > max_size)
        {
            max_size = bell_pair;
        }
    }

    cout << max_size;

    return 0;
}
