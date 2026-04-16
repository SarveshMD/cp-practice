// 2204B - Right Maximum

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
        int selected = n;
        int moves = 0;
        while (selected != 0) {
            int rightMax = INT_MIN;
            for (int i=selected-1; i>=0; i--) {
                if (a[i] > rightMax) {
                    rightMax = a[i];
                    selected = i;
                }
            }
            moves++;
        }
        cout << moves << endl;
    }
}