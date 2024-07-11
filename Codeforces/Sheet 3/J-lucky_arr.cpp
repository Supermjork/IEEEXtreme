#include <iostream>
using namespace std;

int main()
{
    int n, min_num, count_min = 1;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i == 0) min_num = arr[i];
        
        min_num = min(arr[i], min_num);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_num)
        {
            count_min++;
        }
    }

    if (count_min % 2)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}
