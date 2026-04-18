#include <bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid.at(0).size();
    vector<int> last_row(n);
    for (int i=0; i<m; i++) {
        vector<int> curr_row(n);
        for (int j=0; j<n; j++) {
            if (obstacleGrid[i][j]) {
                curr_row[j] = 0;
            }
            else {
                if (i == 0) {
                    if (j == 0) curr_row[j] = 1;
                    else curr_row[j] = curr_row[j-1];
                }
                else if (j == 0) {
                    curr_row[j] = last_row[j];
                }
                else {
                    curr_row[j] = curr_row[j-1] + last_row[j];
                }
            }
        }
        last_row = curr_row;
    }
    return last_row[n-1];
}

int main() {
    vector<vector<int>> grid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    cout << uniquePathsWithObstacles(grid) << endl;

    grid = {{0, 1}, {0, 0}};
    cout << uniquePathsWithObstacles(grid) << endl;

    grid = {{1, 0}, {0, 0}};
    cout << uniquePathsWithObstacles(grid) << endl;

}