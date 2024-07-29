#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n_lines, n_parabolas;

        cin >> n_lines >> n_parabolas;

        vector<int> line_coeffs(n_lines);
        vector<vector<int>> para_coeffs(n_parabolas, vector<int> (3));

        for (int i = 0; i < n_lines; i++)
        {
            cin >> line_coeffs[i];
        }

        for (int i = 0; i < n_parabolas; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> para_coeffs[i][j];
            }
        }

        for (int i = 0; i < n_parabolas; i++)
        {
            long long a = para_coeffs[i][0];
            long long b = para_coeffs[i][1];
            long long c = para_coeffs[i][2];
            bool accepted = false;

            for (int j = 0; j < n_lines; j++)
            {
                int m = line_coeffs[j];

                if (((b - m) * (b - m)) < (4 * a * c))
                {
                    cout << "Yes" << '\n' << m << '\n';
                    accepted = true;
                    break;
                }
            }

            if (!accepted)
            {
                cout << "No" << '\n';
            }

        }

        cout << '\n';
    }

    return 0;
}
