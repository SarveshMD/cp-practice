// CF 2204 - A. Passing the Ball

#include <iostream>
#include <string>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int _=0; _<test_cases; _++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        auto f = s.find('L');
        if (f == string::npos) cout << n << endl;
        else cout << f+1 << endl;
    }
}