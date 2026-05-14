#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    int n = temperatures.size();
    stack<pair<int, int>> stk;
    vector<int> res(n, 0);

    for (int i = 0; i < n; i++)
    {
        int temp = temperatures[i];
        if (stk.empty() || temp <= stk.top().first)
        {
            stk.push({temp, i});
        }
        else
        {
            while (!stk.empty() && temp > stk.top().first)
            {
                pair<int, int> item = stk.top();
                stk.pop();
                res[item.second] = i - item.second;
            }
            stk.push({temp, i});
        }
    }
    return res;
}

vector<int> dailyTemperaturesLessSpace(vector<int> &temperatures)
{
    int n = temperatures.size();
    stack<int> stk;
    vector<int> res(n, 0);

    for (int i = 0; i < n; i++)
    {
        int temp = temperatures[i];
        if (stk.empty() || temp <= temperatures[stk.top()])
        {
            stk.push(i);
        }
        else
        {
            while (!stk.empty() && temp > temperatures[stk.top()])
            {
                int top = stk.top();
                stk.pop();
                res[top] = i - top;
            }
            stk.push(i);
        }
    }
    return res;
}

int main()
{
    vector<int> temps = {30, 38, 30, 36, 35, 40, 28};
    vector<int> warmer = dailyTemperaturesLessSpace(temps);

    for (int i : warmer)
        cout << i << " ";
    cout << endl;
}