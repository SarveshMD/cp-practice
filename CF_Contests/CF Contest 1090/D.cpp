// Codeforces Round 1090 Div.4 - A
// D. The 67th OEIS Problem
// failed

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int test_count;
    cin >> test_count;
    int n;
    for (int loop=0; loop<test_count; loop++) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cout << pow(2,i) << " ";
        }
        cout << endl;
    }
}