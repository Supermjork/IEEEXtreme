#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> populate_matrix(vector<vector<int>>& matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

void print_matrix(const vector<vector<int>>& matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << ' ';
        }

        cout << endl;
    }
}

int main()
{
    int rows, cols, tcases;

    cin >> tcases;

    while(tcases--)
    {
        cin >> rows >> cols;

        vector<vector<int>> in_matrix(rows, vector<int>(cols));

        populate_matrix(in_matrix);

        // Stabilisation Code
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int strict_great = 0;

                if (i < rows - 1)
                {
                    strict_great = max(in_matrix[i + 1][j], strict_great);
                }

                if (i > 0)
                {
                    strict_great = max(in_matrix[i - 1][j], strict_great);
                }

                if (j < cols - 1)
                {
                    strict_great = max(in_matrix[i][j + 1], strict_great);
                }

                if (j > 0)
                {
                    strict_great = max(in_matrix[i][j - 1], strict_great);
                }

                if (in_matrix[i][j] > strict_great) in_matrix[i][j] = strict_great;
            }
        }

        print_matrix(in_matrix);
    }

    return 0;
}
