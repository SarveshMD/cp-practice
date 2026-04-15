// 113A - HQ9+

#include <iostream>
#include <string>
using namespace std;

int main() {
    string instruction;
    cin >> instruction;
    for (char c: instruction) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}