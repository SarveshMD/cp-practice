// LeetCode 931. Minimum Falling Path Sum [Medium]

#include <bits/stdc++.h>
using namespace std;

int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<int> last_row = matrix[0];

    for (int i = 1; i < n; i++)
    {
        vector<int> curr_row(n);
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                curr_row[j] = min(last_row[j], last_row[j + 1]) + matrix[i][j];
            }
            else if (j == n - 1)
            {
                curr_row[j] = min(last_row[j - 1], last_row[j]) + matrix[i][j];
            }
            else
            {
                curr_row[j] = min(min(last_row[j - 1], last_row[j + 1]), last_row[j]) + matrix[i][j];
            }
        }
        last_row = curr_row;
    }

    return *min_element(last_row.begin(), last_row.end());
}

int main()
{
    vector<vector<int>> matrix = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    cout << minFallingPathSum(matrix) << endl;
}