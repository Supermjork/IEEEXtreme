#include <iostream>
using namespace std;

int main()
{
    int n, num, count_pos, count_neg, count_odd, count_even;

    count_pos = 0;
    count_neg = 0;
    count_odd = 0;
    count_even = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num < 0)
        {
            count_neg++;
        }
        else if (num > 0)
        {
            count_pos++;
        }

        if (num % 2)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }

    cout << "Even: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
    cout << "Positive: " << count_pos << endl;
    cout << "Negative: " << count_neg << endl;

    return 0;
}
