#include <iostream>
using namespace std;

int main()
{
    int n, min, max, min_idx, max_idx;
    max = INT_MIN;
    min = INT_MAX;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }

        if (arr[i] > max) 
        {
            max = arr[i];
            max_idx = i;
        }
    }

    swap(arr[min_idx], arr[max_idx]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
