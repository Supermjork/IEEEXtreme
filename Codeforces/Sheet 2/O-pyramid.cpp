#include <iostream>
using namespace std;

int main()
{
    int n_rows;

    cin >> n_rows;

    for (int i = 1; i <= n_rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
