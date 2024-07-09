#include <iostream>
#include <math.h>
using namespace std;

int fib(int n)
{
    /*
        Calculate the nth Fibonacci number in constant time.
        (Theoretically up until n < 71, before rounding errors?)
    */

   // Define golden ratio and conjugate
    double phi, psi;

    phi = (1 + sqrt(5)) / 2;
    psi = (1 - sqrt(5)) / 2;

    return (pow(phi, n) - pow(psi, n)) / sqrt(5);
}

int main()
{
    /*
        Sum of even fibonacci numbers
    */
    int sum_iter;

    // We then loop (yes, O(n), get over it) until we pass 4,000,000
    int idx = 0;
    while (true)
    {
    int fib_result = fib(idx);

    if (fib_result < 4'000'000)
    {
        sum_iter += fib_result;

        idx += 3;
    }
    else
    {
        break;
    }
    }

    std::cout << "[ITERATIVELY] Sum of Even Fibonacci numbers below 4,000,000 = " << sum_iter << ", with highest possible index: " << idx - 3 << "." << endl;

    // Recognising the fibonacci sequence as a geometric sequence, we can use that to our advantage.
    // finding the maximum number of terms through:
    // phi^n/sqrt(5) < 4,000,000 (take log_phi)
    // n = ⌊log_phi(4,000,000 * sqrt(5))⌋ ≈ 33
    double phi = (1 + sqrt(5)) / 2;

    // After some digging around..
    // behold a formula: sum(a^(h * k)) = (a^(h * (n + 1)) - 1) / (a^h - 1)
    // substitute phi for a, 3 for h, 11 for n (3 * 11 = 33)
    int sum_quick = (pow(phi, 3 * (11 + 1)) - 1) / (pow(phi, 3) - 1) / sqrt(5);

    std::cout << "Sum through substitution: " << sum_quick << endl;

    return 0;
}
