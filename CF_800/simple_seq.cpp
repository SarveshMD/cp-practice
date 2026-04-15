// CF - 2210A - A Simple Sequence
// (one of the newer 800s)

#include <iostream>
using namespace std;

int main() {
    int TEST;
    cin >> TEST;
    for (int LOOP=0; LOOP<TEST; LOOP++) {
        int n;
        cin >> n;
        for (int i=n; i>=1; i--) {
            cout << i << " ";
        }
        cout << endl;
    }

}