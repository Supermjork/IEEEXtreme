#include <iostream>
using namespace std;

int main()
{
    int test_cases, n_gb, k_sec;

    cin >> test_cases;

    while (test_cases--)
    {
        cin >> n_gb >> k_sec;

        // Constant time woooo
        cout << n_gb * k_sec - (k_sec - 1) << endl;
    }

    return 0;
}
