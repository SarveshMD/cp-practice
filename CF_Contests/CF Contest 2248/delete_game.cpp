#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        char removed = s[0];
        s = s.substr(1);
        if (removed == '0')
        {
            int i = s.find('1');
            s = s.substr(0, i) + s.substr(i + 1);
        }
        else if (removed == '1')
        {
            int i = s.find('0');
            s = s.substr(0, i) + s.substr(i + 1);
        }
        cout << s << endl;
    }
}