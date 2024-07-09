#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double radius;

    cout << fixed << setprecision(9);

    cin >> radius;

    cout << 3.141592653 * radius * radius << endl;

    return 0;
}
