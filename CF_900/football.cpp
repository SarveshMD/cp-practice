// 96A - Football

#include <iostream>
#include <string>
using namespace std;

int main() {
    char curr;
    string positions;
    cin >> positions;
    int n=positions.length();
    curr = positions[0];
    int consec = 1;
    for (int i=1; i<n; i++) {
        if (positions[i] == curr) consec ++;
        else consec = 1;
        curr = positions[i];
        if (consec == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}