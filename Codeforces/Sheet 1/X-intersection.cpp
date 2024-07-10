#include <iostream>
using namespace std;

int main()
{
    int l_1, r_1, l_2, r_2;

    string expr;

    getline(cin, expr);

    sscanf(expr.c_str(), "%d %d %d %d", &l_1, &r_1, &l_2, &r_2);

    if (l_1 > r_2 || r_1 < l_2)
    {
        cout << -1;
    }
    else
    {
        if (l_1 > l_2) {cout << l_1 << ' ';} else {cout << l_2 << ' ';} 
        if (r_1 < r_2) {cout << r_1 << endl;} else {cout << r_2 << endl;}
    }

    return 0;
}
