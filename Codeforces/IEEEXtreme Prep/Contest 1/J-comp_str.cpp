#include <iostream>
using namespace std;

int main()
{
    string genome_0, genome_1;
    char x, y;
    int diff_0, diff_1;
    bool valid = true;

    cin >> genome_0 >> genome_1;

    // testcases ambiguous
    if (genome_0.length() != genome_1.length())
    {
        cout << "NO";
    }
    else
    {
        diff_0 = 0;
        diff_1 = 0;

        for (int i = 0; i < genome_0.length(); i++)
        {
            if (genome_0[i] != genome_1[i])
            {
                diff_0++;

                if (diff_0 == 1)
                {
                    x = genome_0[i];
                    y = genome_1[i];
                }
                else if (diff_0 == 2)
                {
                    (genome_0[i] == y && genome_1[i] == x)? diff_1 = 1: diff_1 = 0;
                }
                else
                {
                    break;
                }
            }
        }

        if (diff_1 == 1 && diff_0 == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
