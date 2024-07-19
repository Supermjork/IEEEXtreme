#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t_cases;

    cin >> t_cases;

    while (t_cases--)
    {
        int n, a, b;
        bool allDivided = true;

        cin >> n;

        vector<int> num_array(n);
        vector<int> divisability(n);

        // Populate Array
        for (int i = 0; i < n; i++)
        {
            cin >> num_array[i];
        }

        // Check if each number divides
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // Division logic
                if (num_array[j] % num_array[i] == 0)
                {
                    divisability[j]++;
                }
            }
        }

        for (int c : divisability)
        {
            cout << c << ' ';
        }

        cout << endl;

        for (int i = 0; i < n; i++)
        {
            if (divisability[i] > 0)
            {
                allDivided = true;
            }
            else
            {
                allDivided = false;
                break;
            }
        }

        if (allDivided)
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
