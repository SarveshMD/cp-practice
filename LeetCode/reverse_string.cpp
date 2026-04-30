#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
}

int main()
{
    vector<char> s{'h', 'e', 'l', 'l', 'o', 'b'};
    reverseString(s);
    for (char c : s)
    {
        cout << c;
    }
    cout << endl;
}