// 59A - Word

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cin >> word;
    int lower=0, upper=0;
    for (char c: word) (tolower(c) == c)?(lower++):(upper++);
    transform(word.begin(), word.end(), word.begin(), ((lower >= upper)?(::tolower):(::toupper)));
    cout << word << endl;
}