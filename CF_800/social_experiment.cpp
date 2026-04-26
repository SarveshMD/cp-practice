// 2184A. Social Experiment

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int _ = 0; _ < test_cases; _++)
    {
        long long n;
        cin >> n;
        if (n <= 3)
        {
            cout << n << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
    }
}