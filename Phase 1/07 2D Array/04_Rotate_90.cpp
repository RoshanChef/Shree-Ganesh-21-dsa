#include <bits/stdc++.h>
using namespace std;

// time : O(n*n) space O(n*n)
void Rotate_90(vector<vector<int>> &ar, vector<vector<int>> &res)
{
    int row = ar.size();
    int col = ar[0].size();

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            res[j][row - i - 1] = ar[i][j];
}

// time : O(n*n) space : O(1)
void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    // Transpose
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse column wise
    int i = 0;
    col--;
    while (i < col)
    {
        for (int j = 0; j < row; j++)
        {
            swap(matrix[j][i], matrix[j][col]);
        }
        i++, col--;
    }
}

// Print in row major
void pr_row(vector<vector<int>> &ar)
{
    cout << "\nRow Major" << endl;
    int row = ar.size();
    int col = ar[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
}

int main()
{

    vector<vector<int>> ar = {{1, 2, 3, 4},
                              {5, 6, 7, 8},
                              {9, 10, 11, 12},
                              {13, 14, 15, 16}};

    int row = ar.size(), col = ar[0].size();

    vector<vector<int>> res(row, vector<int>(col));

    pr_row(ar);
    // Rotate_90(ar, res);
    rotate(ar);
    pr_row(ar);
}