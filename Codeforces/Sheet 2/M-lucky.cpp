#include <iostream>
using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            return false;
        }

        n /= 10;
    }

    return true;
}

int main()
{
    int a, b;
    bool anyLuck = false;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            anyLuck = true;
            cout << i << " ";
        }
    }

    if (!anyLuck)
    {
        cout << -1;
    }
}
