#include <iostream>
using namespace std;

int main()
{
    char s;
    int n, x_i;

    cin >> s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x_i;

        for (int j = 0; j < x_i; j++)
        {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}
