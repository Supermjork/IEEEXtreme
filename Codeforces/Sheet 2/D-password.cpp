#include <iostream>
using namespace std;

int main()
{
    int input, pwd = 1999;

    while (true)
    {
        cin >> input;

        if (input == pwd)
        {
            cout << "Correct" << endl;
            break;
        }

        cout << "Wrong" << endl;
    }

    return 0;
}
