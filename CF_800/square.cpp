// CF 2167A. Square?

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int _ = 0; _ < test; _++)
    {
        int curr, first;
        cin >> first;
        bool bad = false;
        for (int i = 0; i < 3; i++)
        {
            cin >> curr;
            if (first != curr)
            {
                bad = true;
            }
        }
        cout << (bad ? "NO" : "YES") << endl;
    }
}