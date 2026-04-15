// Codeforces Contest 2220
// Round 1093 Div.2
// A. Blocked

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    int TEST;
    cin >> TEST;
    for (int loop = 0; loop < TEST; loop++) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_set<int> set;
        bool nope=false;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (!nope && set.contains(a[i])) {
                cout << "-1" << endl;
                nope=true;
            }
            set.insert(a[i]);
        }
        if (nope) continue;
        sort(a.begin(), a.end(), [](int a, int b) {
            return a > b;
        });

        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}