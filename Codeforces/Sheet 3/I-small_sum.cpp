#include <iostream>
using namespace std;

int main()
{
    int t, n, min_sum;

    cin >> t;

    while (t > 0)
    {
        cin >> n;

        int arr[n];

        for (int idx = 0; idx < n; idx++)
        {
            cin >> arr[idx];
        }

        min_sum = arr[0] + arr[1] + 2 - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                min_sum = min(arr[i] + arr[j] + (j + 1) - (i + 1), min_sum);
            }
        }

        
        cout << min_sum << endl;

        t--;
    }

    return 0;
}
