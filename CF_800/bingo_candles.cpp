// CF 2208A - Bingo Candles

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int loop=0; loop<test_cases; loop++) {
        int n;
        cin >> n;
        unordered_map<int, int> counts;
        int most_common_el = 0;
        for (int i=0; i<n*n; i++) {
            int aij;
            cin >> aij;
            counts[aij]++;
            if (counts[most_common_el] < counts[aij]) {
                most_common_el = aij;
            }
        }
        if (counts[most_common_el] <= (n*n - n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}