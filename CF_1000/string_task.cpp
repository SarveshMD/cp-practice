// 118A - String Task

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    for (char c: word) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c=='i' || c=='o' || c=='u' || c=='y') continue;
        cout << "." << c;
    }
}