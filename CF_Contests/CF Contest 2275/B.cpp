// Codeforces Round 1125 (Div. 3)
// https://codeforces.com/contest/2275/problem/B
// B. Did Not Go to Print

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
        string commands;
        cin >> commands;
        int k = 0;
        vector<int> res;
        stack<int> stk;
        for (int i = 0; i < n; i++)
        {
            int command = (commands[i] - '0');
            if (command == 1)
            {
                stk.push(i);
            }
            if (command == 2)
            {
                if (!stk.empty())
                {
                    stk.pop();
                    res.push_back(i);
                }
            }
        }
        while (!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for (int item : res)
        {
            cout << item + 1 << " ";
        }
        cout << endl;
    }
}
