#include <iostream>
using namespace std;

int main ()
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    int res = a % 100 * b % 100 * c % 100 * d % 100;

    if (res <= 9)
    {
        cout << "0" << res << endl;
    }
    else
    {
        cout << res << endl;
    }

    return 0;
}
