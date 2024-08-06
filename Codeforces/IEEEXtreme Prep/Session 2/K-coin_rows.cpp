#include <iostream>
#include <vector>
using namespace std;

void print_mat(vector<vector<int>> &m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int m_cols;
        cin >> m_cols;

        vector<vector<int>> matrix(2, vector<int>(m_cols));

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < m_cols; j++)
            {
                cin >> matrix[i][j];
            }
        }

        cout << "Matrix:\n";
        print_mat(matrix);

        // Pathfinding logic
        // Alice always goes for maximum
        // So does Bob
        // But set cells where Alice went with 0
        // To avoid Bob going again
    }
}
