#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        string interceptor;

        cin >> a >> b >> c >> d;

        for (int i = 1; i <= 12; i++)
        {
            if ((i == a) || (i == b))
            {
                interceptor += 'a';
            }

            if ((i == c) || (i == d))
            {
                interceptor += 'b';
            }
        }

        if ((interceptor == "baba") || (interceptor == "abab"))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
