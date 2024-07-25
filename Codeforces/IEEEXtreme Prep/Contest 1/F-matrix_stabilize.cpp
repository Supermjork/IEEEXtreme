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

vector<int> grab_neighbours(vector<vector<int>> matrix, int row, int col)
{
    int row_lim = matrix.size();
    int col_lim = matrix[0].size();

    vector<int> neighbours;

    if (row > 0)
    {
        neighbours.push_back(matrix[row - 1][col]);
    }

    if (row < row_lim - 1)
    {
        neighbours.push_back(matrix[row + 1][col]);
    }

    if (col > 0)
    {
        neighbours.push_back(matrix[row][col - 1]);
    }

    if (col < col_lim - 1)
    {
        neighbours.push_back(matrix[row][col + 1]);
    }

    return neighbours;
}

bool greater_than_neighbours(int current_cell, vector<int> neighbours)
{
    bool isGreater = false;

    for (int i = 0; i < neighbours.size(); i++)
    {
        if (current_cell > neighbours[i])
        {
            isGreater = true;
        }
        else
        {
            isGreater = false;
            break;
        }
    }

    return isGreater;
}

int main()
{
    int rows, cols, tcases;

    cin >> tcases;

    while(tcases--)
    {
        bool unstable = true;
        cin >> rows >> cols;

        vector<vector<int>> in_matrix(rows, vector<int>(cols));

        populate_matrix(in_matrix);

        // Stabilisation Code
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                vector<int> neighbours = grab_neighbours(in_matrix, i, j);

                while (greater_than_neighbours(in_matrix[i][j], neighbours))
                {
                    in_matrix[i][j]--;
                }
            }
        }

        print_matrix(in_matrix);
    }

    return 0;
}
