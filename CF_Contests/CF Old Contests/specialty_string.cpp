// Contest 2220 - Round 1084 (Div.3)
// C. Specialty String

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    for (int loop=0; loop<tests; loop++) {
        int len;
        cin >> len;
        stack<char> stk;
        char curr;
        for (int i=0; i<len; i++) {
            cin >> curr;
            if (stk.empty() || curr != stk.top()) stk.push(curr);
            else stk.pop();
        }
        if (stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}