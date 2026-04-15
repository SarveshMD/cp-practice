// CF Contest 2216
// Round 1092, Div.2

// Problem A. Course Wishes
// FAIL

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k+1, 0);
    vector<int> b(n+1, 0);

    for (int i=1; i<=k; i++) {
        cin >> a[i];
    }
    for (int i=1; i<=n; i++) {
        cin >> b[i];
    }

    unordered_map<int, int> counts(k+2);
    for (int i=1; i<=n; i++) {
        counts[b[i]]++;
    }

    for (int i=0; i<k+2; i++) {
        cout << counts[i] << " ";
    }
    cout << endl;

    vector<int> moves;

    while (counts[k+1] != n && moves.size() <= 1000) {
        bool skip = false;

        if (counts[k] != 0) {
            for (int i=1; i<=n; i++) {
                if (b[i] == k) {
                    cout << "PICKING (top) " << i << endl;
                    moves.push_back(i);
                    counts[b[i]]--;
                    b[i]++;
                    counts[b[i]]++;
                    skip = true;
                    break;
                }
            }
        }
        if (skip) continue;

        int pick = -1;
        int max_diff = -1;
        for (int i=1; i<=k; i++) {
            if ((a[i] - counts[i]) > max_diff && counts[i-1] != 0) {
                max_diff = a[i]-counts[i];
                pick = i;
                cout << "picking " << i << endl;
            }
        }
        cout << "PICKING " << pick << endl;
        moves.push_back(pick);
        counts[b[pick-1]]--;
        counts[b[pick]]++;
        // find a pick-1 in b and increase it;
        auto it = find(b.begin(), b.end(), pick-1);
        if (it != b.end()) {
            int index = it - b.begin();
            b[index]++;
        }
    }

    if (counts[k+1] != n) {
        cout << "-1" << endl;
    }
    cout << moves.size() << endl;
    for (int i=0; i<moves.size(); i++) {
        cout << moves[i] << " ";
    }
    cout << endl;

}