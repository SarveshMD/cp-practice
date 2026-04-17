#include <bits/stdc++.h>
using namespace std;

int minimumTotalDP(vector<vector<int>>& triangle) {
    vector<vector<int>> dp;
    int n = triangle.size();
    for (int i=0; i<n; i++) {
        vector<int> dpRow(i+1);
        if (i==0) {
            dpRow[0] = triangle[0][0];
            dp.push_back(dpRow);
            continue;
        }
        dpRow[0] = dp[i-1][0] + triangle[i][0];
        dpRow[i] = dp[i-1][i-1] + triangle[i][i];
        for (int j=1; j<i; j++) {
            dpRow[j] = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
        }
        dp.push_back(dpRow);
    }

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<=i; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int minPath = INT_MAX;
    for (int i=0; i<n; i++) {
        minPath = min(minPath, dp[n-1][i]);
    }
    return minPath;

}

int minimumTotal(vector<vector<int>>& triangle) {
    vector<int> last;
    int n = triangle.size();
    for (int i=0; i<n; i++) {
        vector<int> dpRow(i+1, 0);
        if (i==0) {
            dpRow[0] = triangle[0][0];
            last = dpRow;
            continue;
        }
        dpRow[0] = last[0] + triangle[i][0];
        dpRow[i] = last[i-1] + triangle[i][i];
        for (int j=1; j<i; j++) {
            dpRow[j] = min(last[j-1], last[j]) + triangle[i][j];
        }
        last = dpRow;
    }
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<=i; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int minPath = INT_MAX;
    for (int i=0; i<n; i++) {
        minPath = min(minPath, last[i]);
    }
    return minPath;
}

int main() {
    vector<vector<int>> tri = {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout << "minTotal: " << minimumTotal(tri) << endl;
    cout << "minTotalDP: " << minimumTotalDP(tri) << endl;
}