// 1475A - Odd Divisor

#include <iostream>
using namespace std;

int main() {
    long long n;
    int TEST;
    cin >> TEST;

    for (int LOOP=0; LOOP<TEST; LOOP++) {
        cin >> n;

        if (n%2) cout << "YES" << endl;
        else {
            while (n%2 == 0) n/=2;
            if (n!=1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}