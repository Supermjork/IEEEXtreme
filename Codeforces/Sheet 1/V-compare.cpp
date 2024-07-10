#include <iostream>
using namespace std;

int main()
{
    int num_0, num_1;
    char op;
    bool flag = true;
    string expr;

    getline(cin, expr);


    // stripping expression of whitespaces
    string expr_stripped;

    for (char c : expr)
    {
        if (!isspace(c))
        {
            expr_stripped.push_back(c);
        }
    }

    sscanf(expr_stripped.c_str(), "%d %c %d", &num_0, &op, &num_1);

    if (op == '<')
    {
        (num_0 < num_1)? flag = true: flag = false;
    }
    else if (op == '>')
    {
        (num_0 > num_1)? flag = true: flag = false;
    }
    else if (op == '=')
    {
        (num_0 == num_1)? flag = true: flag = false;
    }

    if (flag) {cout << "Right";} else { cout << "Wrong";}

    return 0;
}
