#include <iostream>
using namespace std;

int main()
{
    /*
        No I will not implement the O(log N) version. look at it here:
        https://stackoverflow.com/questions/42225738/how-the-time-complexity-of-gcd-is-%CE%98logn
    */
    int a, b;

    cin >> a >> b;

    for (int i = min(a,b); i > 0; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
