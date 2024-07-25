#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test_cases, a, b, c;

    cin >> test_cases;

    while (test_cases--)
    {
        cin >> a >> b >> c;

        vector<int> num_vec({a, b, c});

        sort(num_vec.begin(), num_vec.end());

        for (int i = 1; i <= 5; i++)
        {
            num_vec[0]++;

            // In compiler optimisations we trust
            sort(num_vec.begin(), num_vec.end());
        }

        cout << num_vec[0] * num_vec[1] * num_vec[2] << endl;
    }
}
