#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t_cases;

    cin >> t_cases;

    while (t_cases--)
    {
        int n, div = 0;
        bool isBeautiful = 1;

        cin >> n;

        vector<int> num_array(n);

        // Populate Array
        for (int i = 0; i < n; i++)
        {
            cin >> num_array[i];
        }

        sort(num_array.begin(), num_array.end());

        for (int i = 1; i < n; i++)
        {
            if (num_array[i] % num_array[0] != 0)
            {
                if (div == 0)
                {
                    div = num_array[i];
                }
                else
                {
                    if (num_array[i] % div != 0)
                    {
                        isBeautiful= 0;
                        break;
                    }
                }
            }
        }

        if (isBeautiful)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
