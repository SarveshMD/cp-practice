// Codeforces Problem 112A - Petya and Strings
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c) {
        return tolower(c);
    });
    transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c) {
        return tolower(c);
    });
    if (s1<s2) cout << -1;
    else if (s2<s1) cout << 1;
    else cout << 0;
}