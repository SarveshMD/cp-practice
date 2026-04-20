// CF 2195A - Sieve of Erato67henes

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int _ = 0; _ < test; _++)
    {
        int n;
        cin >> n;
        bool six_seven = false;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 67)
                six_seven = true;
        }
        cout << ((six_seven) ? "YES" : "NO") << endl;
    }
}