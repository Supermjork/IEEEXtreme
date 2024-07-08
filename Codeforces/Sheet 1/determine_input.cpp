#include <iostream>
using namespace std;

int main()
{
    char input;

    cin >> input;

    if (input < 58 && input > 47)
    {
        cout << "IS DIGIT";
    }

    if (input < 91 && input > 64)
    {
        cout << "ALPHA\n" << "IS CAPITAL";
    }

    if (input < 123 && input > 96)
    {
        cout << "ALPHA\n" << "IS SMALL";
    }

    return 0;
}