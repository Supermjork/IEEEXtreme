#include <iostream>
using namespace std;

int main()
{
    int sum, n, m;

    sum = 0;

    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
        {
            return 0;
        }
        else
        {
            for (int j = min(n, m); j <= max(n, m); j++)
            {
                cout << j << ' ';
                sum += j;
            }

            cout << "sum =" << sum << endl;
        }

        sum = 0;
    }
}
