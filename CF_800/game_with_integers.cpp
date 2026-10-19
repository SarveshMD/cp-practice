// https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 3 == 1 || n % 3 == 2)
        {
            cout << "First" << endl; // Vanya can +1 or -1 and win immediately
        }
        else
        {
            cout << "Second" << endl; // It's already divisible by 3, vanya has to +1 / -1 and it can be undone by vova
        }
    }
}
