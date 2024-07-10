#include <iostream>
using namespace std;

void print_num(string expr)
{
    for (int i = expr.length() - 1; i >= 0; i--)
    {
        cout << expr[i] << ' ';
    }

    cout << endl;
}

int main()
{
    int t;
    string expr;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> expr;

        print_num(expr);
    }

    return 0;
}
