// Codeforces 236A - Boy or Girl

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string username;
    cin >> username;
    unordered_map<char, int> count;
    for (char c: username) {
        count[c]++;
    }
    if (count.size()%2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}