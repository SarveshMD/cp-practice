// Codeforces Round 1090 Div.4 - A
// B. The 67th 6-7 Integer Problem

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum;
    vector<int> a(7);
    for (int loop=0; loop<n; loop++) {
        sum = 0;
        for (int i=0; i<7; i++) {
            cin >> a[i];
            sum -= a[i];
        }
        sum += 2* *max_element(a.begin(), a.end());
        cout << sum << endl;
    }
}