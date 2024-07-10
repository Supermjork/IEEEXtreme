#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, d, r_1, r_2;

    cin >> a >> b >> c >> d;

    r_1 = b * log(a);
    r_2 = d * log(c);

    if (r_1 > r_2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
