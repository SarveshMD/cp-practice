#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt)
    {
        int k;
        cin >> k;
        bool condition = false;
        int n_of_twos = 0;
        for (int i = 0; i < k; i++)
        {
            int c;
            cin >> c;
            if (c >= 2)
            {
                n_of_twos++;
            }
            if (c >= 3 || n_of_twos >= 2)
            {
                condition = true;
            }
        }
        cout << (condition ? "YES" : "NO") << endl;
        tt--;
    }
}