#include <iostream>
using namespace std;

int main()
{
    int len_0, len_1;
    bool isNum = false;
    string expr;

    cin >> len_0 >> len_1 >> expr;

    if (expr[len_0] != '-' || expr.length() < (len_0 + len_1 + 1) || expr[expr.length() - 1] == '-' || expr[0] == '-')
    {
            cout << "No" << endl;
            return 1;
    }
    else
    {
        for (int i = 0; i < expr.length(); i++)
        {
            if ((int) expr[i] - 48 <= 9)
            {
                isNum = true;
            }
            else if (expr[i] == '-')
            {
                continue;
            }
            else
            {
                isNum = false;
                break;
            }
        }
    }

    if (isNum == false)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}
