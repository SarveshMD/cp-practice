// 266A - Stones on the Table

#include <iostream>
#include <string>
using namespace std;

int main() {
    char curr;
    int length, pick = 0;
    string stones;
    cin >> length;
    cin >> stones;
    for (char c: stones) {
        if (c == curr) pick++;
        curr = c;
    }
    cout << pick;
}