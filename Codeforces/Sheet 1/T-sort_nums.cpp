#include <iostream>
using namespace std;

int main()
{
    int in_num_0, in_num_1, in_num_2, orig_num_0, orig_num_1, orig_num_2;

    cin >> in_num_0 >> in_num_1 >> in_num_2;

    orig_num_0 = in_num_0;
    orig_num_1 = in_num_1;
    orig_num_2 = in_num_2;

    if (in_num_0 <= in_num_1 && in_num_0 <= in_num_2)
    {
        cout << in_num_0 << endl;

        if (in_num_1 <= in_num_2)
        {
            cout << in_num_1 << endl;
            cout << in_num_2 << endl;
        }
        else
        {
            cout << in_num_2 << endl;
            cout << in_num_1 << endl;
        }
    }
    else if (in_num_1 <= in_num_0 && in_num_1 <= in_num_2)
    {
        cout << in_num_1 << endl;

        if (in_num_0 <= in_num_2)
        {
            cout << in_num_0 << endl;
            cout << in_num_2 << endl;
        }
        else
        {
            cout << in_num_2 << endl;
            cout << in_num_0 << endl;
        }
    }
    else
    {
        cout << in_num_2 << endl;

        if (in_num_0 <= in_num_1)
        {
            cout << in_num_0 << endl;
            cout << in_num_1 << endl;
        }
        else
        {
            cout << in_num_1 << endl;
            cout << in_num_0 << endl;
        }
    }

    // original sequence
    cout << '\n' << orig_num_0 << '\n' << orig_num_1 << '\n' << orig_num_2 << endl;

    return 0;
}
