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

   for (int i = 0; i <= 15; i++)
   {
    // Printing fibonacci numbers to notice an even/odd pattern (through indecies)
    std::cout << "Fibonacci at index (" << i << ") = "<< fib(i) << endl;
   }

   // Noticing the repetition of an even number ever 2 odds.
   // We then loop (yes, O(n), get over it) until we pass 4,000,000
   int idx = 0;
   while (true)
   {
    int fib_result = fib(idx);

    if (fib_result < 4'000'000)
    {
        if (fib_result % 2) sum_iter += fib_result;

        idx++;
    }
    else
    {
        break;
    }
   }

   std::cout << "[ITERATIVELY] Sum of Even Fibonacci numbers below 4,000,000 = " << sum_iter << ", with highest possible index: " << idx << endl;

   // Recognising the fibonacci sequence as a geometric sequence, we can use that to our advantage.
   // finding the maximum number of terms through:
   // phi^n < 4,000,000 (take log_10)
   // n log_10(phi) < log_10(4,000,000)
   // n = ⌊log_10(4,000,000) / log_10(phi)⌋ ≈ 31
   double phi = (1 + sqrt(5)) / 2;

   int sum_const_t = (1 - pow(phi, 31)) / (1 - phi);

   std::cout << sum_const_t << endl;

   return 0;
}
