#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (b % a && a % b)
    {
        cout << "No Multiples";
    }
    else
    {
        cout << "Multiples";
    }

    return 0;
}
