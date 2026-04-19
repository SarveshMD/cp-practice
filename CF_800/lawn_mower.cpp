// CF 2194A - Lawn Mower

#include <iostream>
using namespace std;

int main()
{
    int TEST;
    cin >> TEST;
    for (int _ = 0; _ < TEST; _++)
    {
        int n, w;
        cin >> n >> w;
        int removed = n - (n / w);
        cout << removed << endl;
    }
}