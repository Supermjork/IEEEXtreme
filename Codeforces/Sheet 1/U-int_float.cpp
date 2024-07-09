#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float input, decimal;
    int whole;

    cin >> input;

    whole = (int) input;

    decimal = input - whole;

    if (decimal != 0)
    {
        cout << "float " << whole << " " << setprecision(3) << decimal << endl; 
    }
    else
    {
        cout << "int " << whole << endl;
    }

    return 0;
}
