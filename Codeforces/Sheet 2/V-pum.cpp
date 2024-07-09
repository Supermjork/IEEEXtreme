#include <iostream>
using namespace std;

int main()
{
    int n_rows;

    cin >> n_rows;

    for (int i = 1; i <= n_rows * 4; i++)
    {
        if (i % 4)
        {
            cout << i << " ";
        }
        else
        {
            cout << "PUM" << endl;
        }
    }

    return 0;
}
