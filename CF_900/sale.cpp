// CF900 - 34B. Sale

#include <bits/stdc++.h>
using namespace std;

void knapsack(vector<int>& profits, int W, vector<vector<int>>& dp) {
    int n = profits.size();
    for (int i=1; i<=n; i++) {
        for (int w=1; w<=W; w++) {
            dp[i][w] = max(dp[i-1][w], dp[i-1][w-1] - profits[i-1]);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> profits(n);

    for (int i=0; i<n; i++) {
        cin >> profits[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    knapsack(profits, m, dp);
    cout << dp[n][m] << endl;
}