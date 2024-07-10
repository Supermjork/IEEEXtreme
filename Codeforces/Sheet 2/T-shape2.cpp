#include <iostream>
using namespace std;

int main()
{
    int n_rows;

    cin >> n_rows;

    for (int i = 1; i <= n_rows; i++)
    {
        for (int k = n_rows - i; k >= 1; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
