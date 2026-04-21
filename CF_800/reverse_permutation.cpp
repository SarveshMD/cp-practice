// CF 2193B. Reverse a Permutation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int loop;
    cin >> loop;
    for (int _ = 0; _ < loop; _++)
    {
        int n;
        cin >> n;
        vector<int> perm(n);
        for (int i = 0; i < n; i++)
        {
            cin >> perm[i];
        }
        int j = n;
        int l = 1;
        for (int i = 0; i < n; i++)
        {
            if (perm[i] == j)
            {
                j--;
                l++;
            }
            else
            {
                break;
            }
        }
        auto it = find(perm.begin(), perm.end(), j);
        int r;
        if (it != perm.end())
        {
            r = distance(perm.begin(), it) + 1;
        }
        else
        {
            r = n;
        }
        if (!(l >= n || l > r))
        {
            reverse(perm.begin() + l - 1, perm.begin() + r);
        }
        for (int i = 0; i < n; i++)
        {
            cout << perm[i] << " ";
        }
        cout << endl;
    }
}