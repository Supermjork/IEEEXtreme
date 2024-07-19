#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> populate_matrix(vector<vector<int>> matrix)
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

void print_matrix(vector<vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (j != matrix[i].size() - 1)
            {
                cout << matrix[i][j] << ' ';
            }
            else
            {
                cout << matrix[i][j];
            }
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cin >> rows >> cols;

    vector<vector<int>> in_matrix(rows, vector<int>(cols));

    in_matrix = populate_matrix(in_matrix);

    // Stabilisation Code

    print_matrix(in_matrix);

    return 0;
}
