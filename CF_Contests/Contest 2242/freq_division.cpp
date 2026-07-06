#include <bits/stdc++.h>
using namespace std;

// Unfinished

int main()
{
    int tt;
    cin >> tt;
    while (tt)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> pref1(n, 0);
        vector<int> pref2(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                if (i == 0)
                {
                    pref1[i] = 1;
                    pref2[i] = 1;
                }
                else
                {
                    pref1[i] = pref1[i - 1] + 1;
                    pref2[i] = pref2[i - 1] + 1;
                }
            }
            else if (arr[i] == 2)
            {
                if (i == 0)
                {
                    pref1[i] = -1;
                    pref2[i] = 1;
                }
                else
                {
                    pref1[i] = pref1[i - 1] - 1;
                    pref2[i] = pref2[i - 1] + 1;
                }
            }
            else if (arr[i] == 3)
            {
                if (i == 0)
                {
                    pref1[i] = -1;
                    pref2[i] = -1;
                }
                else
                {
                    pref1[i] = pref1[i - 1] - 1;
                    pref2[i] = pref2[i - 1] - 1;
                }
            }
        }
        cout << "Prefix1: ";
        for (int i : pref1)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << "Prefix2: ";
        for (int i : pref2)
        {
            cout << i << " ";
        }
        cout << endl;
        tt--;
    }
}