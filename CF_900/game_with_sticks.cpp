// 451A - Game with Sticks

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (min(m, n) % 2) {
        cout << "Akshat" << endl;
    }
    else {
        cout << "Malvika" << endl;
    }
}