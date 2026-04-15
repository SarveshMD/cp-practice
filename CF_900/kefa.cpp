// 580A - Kefa and First Steps

#include <iostream>
#include <vector>
#include <format>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n, 1);
    int in;
    int last = -1;
    for (int i=0; i<n; i++) {
        cin >> in;
        if (in >= last && i > 0) {
            dp[i] = 1 + dp[i-1];
        }
        last = in;
    }
    int longest = 0;
    for (int i=0; i<n; i++) {
        longest = max(longest, dp[i]);
    }
    cout << longest << endl;

}