#include <bits/stdc++.h>
using namespace std;

int uniquePathsRecursion(int m, int n) {
    // Leetcode TLEs on recursion
    if (m == 1 || n == 1) return 1;
    return uniquePathsRecursion(m-1, n) + uniquePathsRecursion(m, n-1);
}

int uniquePathsDP(int m, int n) {
    vector<int> last_row(n, 1);
    for (int i=1; i<m; i++) {
        vector<int> curr_row(n, 1);
        for (int j=1; j<n; j++) {
            curr_row[j] = last_row[j] + curr_row[j-1];
        }
        last_row = curr_row;
    }
    return last_row[n-1];
}

int choose(int n, int k) {
    int C = n;
    for (int i=2; i<=k; i++) {
        C = C * (n-i+1)/(i); // C *= doesn't work because (n-i+1)/(i) could be fractional
    }
    return C;
}

int uniquePathsCombinatorics(int m, int n) {
    int N = m+n-2;
    int k = min(m,n) - 1;
    return choose(N, k);
}

int main() {
    cout << uniquePathsDP(3, 7) << endl;
    cout << uniquePathsDP(3, 2) << endl;
    cout << uniquePathsCombinatorics(6, 5) << endl;
}