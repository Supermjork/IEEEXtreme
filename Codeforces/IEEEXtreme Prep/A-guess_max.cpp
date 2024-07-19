#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_cases;

    cin >> test_cases;

    while (test_cases--)
    {
        int n, k;

        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        // Shennanigains

        cout << k << endl;
    }

    return 0;
}
