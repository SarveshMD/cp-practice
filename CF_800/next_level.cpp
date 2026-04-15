// Codeforces 158A - Next Round

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ai;
    vector<int> inputs;
    for (int i=0; i<n; i++) {
        cin >> ai;
        inputs.push_back(ai);
    }
    int bound = inputs[k-1];
    int sol = 0;
    for (int i=0; i<n; i++) {
        if (inputs[i] > 0 && inputs[i] >= bound) {
            sol++;
        }
    }
    cout << sol;
    return 0;
}