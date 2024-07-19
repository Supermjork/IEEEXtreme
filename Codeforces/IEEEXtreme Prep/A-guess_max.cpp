#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_cases;

    cin >> test_cases;

    while (test_cases--)
    {
        int n, max_num;

        max_num = INT_MAX;

        cin >> n;

        vector<int> num_vec(n);

        for (int i = 0; i < num_vec.size(); i++)
        {
            cin >> num_vec[i];
        }

        for (int n : num_vec)
        {
            cout << n << ' ';
        }

        for (int i = 1; i < num_vec.size(); i++)
        {
            int n_0 = num_vec[i - 1];
            int n_1 = num_vec[i];

            max_num = min(max_num, min(n_0, n_1));
        }

        cout << max_num - 1 << endl;
    }

    return 0;
}
