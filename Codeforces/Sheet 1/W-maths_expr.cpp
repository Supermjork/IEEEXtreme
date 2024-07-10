#include <iostream>
using namespace std;

int main()
{
    int a, b, c, fixed_output;
    char s, q;
    string expr, expr_stripped;

    getline(cin, expr);

    for (char c : expr)
    {
        if (!isspace(c))
        {
            expr_stripped.push_back(c);
        }
    }

    sscanf(expr_stripped.c_str(), "%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        ((a + b) == c)? cout << "Yes": cout << a + b;
    }
    else if (s == '-')
    {
        ((a - b) == c)? cout << "Yes": cout << a - b;
    }
    else if (s == '*')
    {
        ((a * b) == c)? cout << "Yes": cout << a * b;
    }

    return 0;
}
