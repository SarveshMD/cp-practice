// Codeforces Round 1090 Div.4 - A
// The 67th Integer Problem

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> k;
        if (k < 67) cout << k+1 << endl;
        else cout << k << endl;
    }
}