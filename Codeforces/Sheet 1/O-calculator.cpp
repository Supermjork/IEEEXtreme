#include <iostream>
using namespace std;

int main()
{
    string expr;
    char op;
    int num_0, num_1, res;

    cin >> expr;

    // Won't be adding input sanitisation
    sscanf(expr.c_str(), "%d%c%d", &num_0, &op, &num_1);

    if (op == '+')
    {
        cout << num_0 + num_1;
    }
    else if (op == '-')
    {
        cout << num_0 - num_1;
    }
    else if (op == '*')
    {
        cout << num_0 * num_1;
    }
    else if (op == '/')
    {
        cout << num_0 / num_1;
    }
    else
    {
        return 1;
    }
    
    return 0;
}
