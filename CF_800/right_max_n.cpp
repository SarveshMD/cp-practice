// Same 2204B - Right maximum Problem
// O(n) implementation attempt

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    for (int loop=0; loop<tests; loop++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int moves = 0;
        int runMax = INT_MIN;
        for (int i=0; i<n; i++) {
            if (runMax <= a[i]) {
                runMax = a[i];
                moves++;
            }
        }
        cout << moves << endl;
    }
}