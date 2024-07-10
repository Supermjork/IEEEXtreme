#include <iostream>
using namespace std;

int main()
{
    int t, x, y, sum;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;

        sum = 0;

        for (int j = min(x, y) + 1; j < max(x, y); j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
