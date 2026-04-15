// 1850D - Balanced Round

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int TESTS;
    cin >> TESTS;
    for (int _ = 0; _ < TESTS; _++) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<int> dp(n, 1);

        for (int i=1; i<n; i++) {
            if (abs(a[i-1]-a[i]) <= k) {
                dp[i] = dp[i-1]+1;
            }
        }

        // find max dp[i], keep that many elements
        // remove the rest
        int maxDP = INT_MIN;
        for (int i=0; i<n; i++) {
            if (dp[i] > maxDP) {
                maxDP = dp[i];
            }
        }

        cout << n - maxDP << endl;
    }
}