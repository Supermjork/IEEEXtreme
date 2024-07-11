#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    string expr;

    cin >> n >> expr;

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ((int) expr[i]) - 48;
    }

    cout << sum << endl;

    return 0;
}
