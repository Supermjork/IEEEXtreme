#include <iostream>
using namespace std;

int main()
{
    int n, fib_n_0 = 1, fib_n_1 = 1, fib_n;

    cin >> n;

    cout << 0 << " ";

    for (int i = 2; i <= n; i++)
    {
        if (i == 2 || i == 3)
        {
            cout << fib_n_0 << " ";
        }
        else
        {
            fib_n = fib_n_0 + fib_n_1;

            cout << fib_n << " ";

            fib_n_0 = fib_n_1;
            fib_n_1 = fib_n;
        }
    }

    return 0;
}
