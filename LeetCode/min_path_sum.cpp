#include <bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid.at(0).size();
    vector<int> last_row(m);
    for (int i=0; i<n; i++) {
        vector<int> curr_row(m);
        for (int j=0; j<m; j++) {
            if (i==0) {
                if (j == 0) curr_row[j] = grid[i][j];
                else curr_row[j] = curr_row[j-1]+grid[i][j];
            }
            else if (j==0) { // first col
                curr_row[j] = last_row[j] + grid[i][j];
            }
            else {
                curr_row[j] = min(last_row[j], curr_row[j-1]) + grid[i][j];
            }
        }
        last_row = curr_row;
    }
    return last_row[m-1];
}

int main() {
    vector<vector<int>> grid1 = {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };
    cout << minPathSum(grid1) << endl;

    vector<vector<int>> grid2 =  {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << minPathSum(grid2) << endl;
}