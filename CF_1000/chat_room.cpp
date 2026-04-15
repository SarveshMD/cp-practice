// 58A - Chat Room

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string hello = "hello";
    int p = 0;
    bool yes = false;
    for (char c: s) {
        if (c == hello[p]) {
            p++;
        }
        if (p == 5) {
            yes = true;
            break;
        }
    }
    if (yes) cout << "YES" << endl;
    else cout << "NO" << endl;
}