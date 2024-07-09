#include <iostream>
using namespace std;

int main()
{
    int t_cases, nums, fact;

    cin >> t_cases;

    for (int i = 0; i < t_cases; i++)
    {
        cin >> nums;

        fact = 1;

        for (int i = 1; i <= nums; i++)
        {
            fact *= i;
        }

        cout << fact << endl;
    }
}
