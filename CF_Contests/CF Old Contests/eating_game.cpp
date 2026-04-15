// Contest 2220 - Round 1084 (Div.3)
// A. Eating Game

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin >> test;
    for (int loop = 0; loop<test; loop++) {
        int n;
        cin >> n;
        vector<int> dishes(n);
        for (int i = 0; i<n; i++) {
            cin >> dishes[i];
        }
        int highest = *max_element(dishes.begin(), dishes.end());
        int winners = 0;
        for (int dish: dishes) {
            if (dish == highest) winners++;
        }
        cout << winners << endl;
    }
}