// CF 2193A. DBMB and the Array

#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int _ = 0; _ < test_cases; _++)
    {
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        cout << (((s >= sum) && ((s - sum) % x == 0)) ? "YES" : "NO") << endl;
    }
}