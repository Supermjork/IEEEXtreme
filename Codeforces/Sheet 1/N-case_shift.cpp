#include <iostream>
using namespace std;

int main()
{
    char input;

    cin >> input;

    if (input < 91 && input > 64)
    {
        cout << char(input + 32);
    }
    else
    {
        cout << char(input - 32);
    }

    return 0;
}
