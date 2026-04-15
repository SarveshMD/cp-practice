// Codeforces Round 1090 Div.4 - A
// C. The 67th Permutation Problem

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int test_count;
    cin >> test_count;
    for (int loop = 0; loop<test_count; loop++) {
        cin >> n;
        vector<int> a(3*n);
        int j=0;
        for (int i=0; i<(3*n); i+=3, j++) {
            a[i] = j+1;
            a[i+1] = 3*n - 2*j;
            a[i+2] = 3*n - 2*j - 1;
        }
        for (int i=0; i<3*n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}