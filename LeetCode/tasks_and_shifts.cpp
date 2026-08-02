#include <bits/stdc++.h>
using namespace std;

vector<int> countTasks(vector<int> &tasks, vector<int> &shifts)
{
    int n = shifts.size();
    int m = tasks.size();
    vector<long long> pref(m, 0);

    pref[0] = tasks[0];
    for (int i = 1; i < m; i++)
        pref[i] = pref[i - 1] + tasks[i];

    vector<int> ans(n, 0);
    long long carry = 0;
    for (int i = 0; i < n; i++)
    {
        long long available = shifts[i] + carry;

        if (shifts[i] >= pref[m - 1])
        {
            ans[i] = 0;
            carry = 0;
            continue;
        }

        auto iter = upper_bound(pref.begin(), pref.end(), available);
        int k = 0;
        if (iter != pref.end())
            k = m - (iter - pref.begin());

        ans[i] = k;

        if (available >= pref[m - 1])
            carry = 0;
        else
            carry += shifts[i];
    }
    return ans;
}

int main()
{
    // vector<int> tasks = {4, 2};
    // vector<int> shifts = {3, 6, 1};
    vector<int> tasks = {1, 4, 4};
    vector<int> shifts = {9, 1, 4};
    // vector<int> tasks = {2, 3, 4};
    // vector<int> shifts = {20, 4, 5};
    // vector<int> tasks = {1, 1, 3, 3, 8};
    // vector<int> shifts = {2, 9, 5, 3, 9};

    vector<int> ans = countTasks(tasks, shifts);

    for (int a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
}