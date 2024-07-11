#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main()
{
    /*
        Problem statement: 2520 can be evenly divided by 1 through 10, i.e. no remainder
        find a number to be divded by numbers from 1 through 20
    */

    // We can breakdown 2520 to its original factors.
    // 5, 7, 8, 9 -> through division of any of these and their factors, we get even division

    // Noting the presence of prime numbers being mandatory
    // as well as numbers that constitute other numbers (8 -> 4 * 4, consequently, 4 -> 2 * 2)
    // Listing primes from 20 -> 1
    // 19, 17, 13, 11, 7, 5, 3, 2
    // their product being: 9,699,690

    // Now it will be a mix-match to see what the exponent for each prime is

    int result = 1;

    // just add a cin >> bound if you want to customize it
    int bound = 20;

    for (int i = 2; i <= bound; ++i) {
        result = lcm(result, i);
    }

    cout << "The smallest common multiple for numbers between 1 and " << bound << "is: " << result << endl;

    return 0;
}
