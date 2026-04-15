// CF 800 - 2209A - Flip Flops
// newer 800s are something else. I can't believe I was in the past for two weeks.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int loop=0; loop<test_cases; loop++) {
        int n;
        long long c,k;
        cin >> n >> c >> k;
        vector<long long> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for (int i=0; i<n; i++) {
            if (a[i] <= c) {
                long long diff = min(c-a[i], k);
                c += diff + a[i];
                k -= diff;
            }
        }
        cout << c << endl;
    }
}