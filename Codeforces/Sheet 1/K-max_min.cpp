#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max, min;

    cin >> a >> b >> c;

    max = min = a;

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    cout << min << ' ' << max << endl;

    return 0;
}
