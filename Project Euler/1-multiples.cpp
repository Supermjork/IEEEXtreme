#include <iostream>
#include <math.h>
using namespace std;

/*
    Problem statement: Sum of multiples of (3) and (5) under (1000)
    Proposed Solution: Sum the muliples of (3) and (5) afterwards;
                       Deduct the sum of multiples of (15)
*/

int multiples_sum(int base, int bound)
{
    // Largest multiple below bound
    // nk < b -> k = ⌊b / n⌋
    int k = floor((bound - 1) / base) * base;

    // Number of terms until the largest multiple
    // k = a + (n - 1) * d
    int n = ((k - base) / base) + 1;

    // Sum of arithmetic sequence
    return n * (base + k) / 2;
}

int main()
{
    int sum_03, sum_05, sum_15, limit, final_sum;

    limit = 1000;

    sum_03 = multiples_sum(3, limit);
    sum_05 = multiples_sum(5, limit);
    sum_15 = multiples_sum(15, limit);

    final_sum = sum_03 + sum_05 - sum_15;

    cout << "Sum of multiples of (3) and (5) = " << final_sum << endl;

    return 0;
}
