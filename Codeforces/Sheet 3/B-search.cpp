#include <iostream>
using namespace std;

int main()
{
    int size, tgt, idx;
    idx = -1;

    cin >> size;

    int *arr_0 = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> *(arr_0 + i);
    }

    cin >> tgt;

    for (int i = 0; i < size; i++)
    {
        if (tgt == arr_0[i])
        {
            idx = i;
            break;
        }
    }

    cout << idx << endl;

    return 0;
}
