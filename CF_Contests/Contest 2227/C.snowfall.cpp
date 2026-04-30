// 2227. C. Snowfall
// 10:57pm

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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int powers_of_two = 0;
        int powers_of_three = 0;
        int powers_of_both = 0;
        vector<int> two, three, both, rest;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
                both.push_back(nums[i]);
            else if (nums[i] % 2 == 0)
                two.push_back(nums[i]);
            else if (nums[i] % 3 == 0)
                three.push_back(nums[i]);
            else
                rest.push_back(nums[i]);
        }
        bool more_twos = (two.size() >= three.size());
        if (!more_twos)
        {
            for (int i : both)
            {
                cout << i << " ";
            }
        }
        for (int i : two)
        {
            cout << i << " ";
        }
        for (int i : rest)
        {
            cout << i << " ";
        }
        for (int i : three)
        {
            cout << i << " ";
        }
        if (more_twos)
        {
            for (int i : both)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}

// wrong answer at 11:19pm (22 mins)
// fixed bug and accepted at 11:20pm (23 mins)