// CF 2216A - Course Wishes

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
// n=3 k=2
// 2 2 -> a[i] (k elements, max number of course in each priority) (not even necessary)
// 1 2 2 -> b[i] (n elements, initial priority of each course)

    int test_cases;
    cin >> test_cases;

    for (int loop=0; loop<test_cases; loop++) {
        int n, k;
        cin >> n >> k;
        vector<int> ai(k);
        vector<int> bi(n);

        for (int i=0; i<k; i++) {
            cin >> ai[i];
        }
        for (int i=0; i<n; i++) {
            cin >> bi[i];
        }

        int totalMoves = 0;
        string steps = "";
        for (int i=k; i>=1; i--) {
            for (int j=0; j<n && totalMoves <= 1000; j++) {
                if (bi[j] == i) {
                    int moves = k+1 - bi[j];
                    totalMoves += moves;
                    for (int w=0; w<moves; w++)
                        steps += to_string(j+1) + " ";
                    bi[j] = k+1;
                }
            }
        }
        if (totalMoves > 1000) cout << -1 << endl;
        else {
            cout << totalMoves << endl;
            cout << steps << endl;
        }
    }
}