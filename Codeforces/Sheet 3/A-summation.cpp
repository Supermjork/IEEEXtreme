#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;

    cin >> n;

    int *arr_0 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> *(arr_0 + i);

    }

    for (int i = 0; i < n; i++)
    {
        sum += arr_0[i];
    }

    cout << abs(sum) <<endl;

    return 0;
}
