// CF 2209B - Array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int loop=0; loop<test_cases; loop++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<n; i++) {
            int less = 0, greater=0;
            for (int j=i+1; j<n; j++) {
                if (a[i] > a[j]) greater++;
                else if (a[i] < a[j]) less++;
            }
            cout << max(less, greater) << " ";
        }
        cout << endl;
    }
}