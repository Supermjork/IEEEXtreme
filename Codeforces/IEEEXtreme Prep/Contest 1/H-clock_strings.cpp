#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        if (a > b)
        {
            swap(a, b);
        }

        if (c > d)
        {
            swap(c, d);
        }

        if ((a > c && b > d) || (c > a && b > d))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
