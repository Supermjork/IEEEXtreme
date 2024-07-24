#include <iostream>
using namespace std;

int main()
{
    int test_cases;

    cin >> test_cases;

    while (test_cases--)
    {
        int n, count, remainder_1, remainder_2, in_num, min_pair;

        count = 0;
        remainder_1 = 0;
        remainder_2 = 0;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> in_num;

            if (in_num % 3 == 0)
            {
                count++;
            }
            else if (in_num % 3 == 1)
            {
                remainder_1++;
            }
            else
            {
                remainder_2++;
            }
        }

        min_pair = min(remainder_1, remainder_2);

        count += min_pair;

        remainder_1 -= min_pair;
        remainder_2 -= min_pair;

        if (remainder_1 > 0)
        {
            count += remainder_1 / 3;
        }

        if (remainder_2 > 0)
        {
            count += remainder_2 / 3;
        }

        cout << count << endl;
    }

    return 0;
}
