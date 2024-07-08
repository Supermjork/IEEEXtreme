#include <iostream>
using namespace std;

int main()
{
    string F_1, F_2, S_1, S_2;

    cin >> F_1 >> S_1;

    cin >> F_2 >> S_2;

    if (S_1 == S_2)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }

    return 0;
}
