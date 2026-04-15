// 734A - Anton and Danik

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    int a = 0, d = 0;
    for (int i=0; i<n; i++) {
        cin >> c;
        if (c == 'D') d++;
        if (c == 'A') a++;
    }
    if (a>d) cout << "Anton" << endl;
    else if (a<d) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

}