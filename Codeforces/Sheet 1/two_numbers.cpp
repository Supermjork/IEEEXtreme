#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << (int) (a / b) << endl;

    cout << "ceil " << a << " / " << b << " = " << (int) ((a / b) + 1) << endl;

    cout << "round " << a << " / " << b << " = " << (int) ((a / b) + 0.5) << endl;

    return 0;
}
