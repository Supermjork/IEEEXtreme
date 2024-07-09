#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sum_squares, sum_squared, bound;

    cout << "Enter a boundary of sum: ";

    cin >> bound;

    sum_squared = pow(bound * (bound + 1) / 2, 2);

    sum_squares = bound * (bound + 1) * (2 * bound + 1) / 6;

    cout << sum_squared - sum_squares << endl;
}