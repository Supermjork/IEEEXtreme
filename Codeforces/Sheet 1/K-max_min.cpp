#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max, min;

    cin >> a >> b >> c;

    max = min = a;

    // I will not apologise for how scuffed this is
    (b > max)? max = b:(c > max)? max = c: max = max;

    (b < min)? min = b:(c < min)? min = c: min = min;

    cout << min << ' ' << max << endl;

    return 0;
}
