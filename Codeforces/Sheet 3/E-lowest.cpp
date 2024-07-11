#include <iostream>
using namespace std;

int main()
{
    int n, lowest_idx = 0;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[lowest_idx] > arr[i])
        {
            lowest_idx = i;
        }
    }

    cout << arr[lowest_idx] << ' ' << lowest_idx + 1 << endl;

    return 0;
}
