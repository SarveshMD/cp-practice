// CF 2203A - Towers of Boxes

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int TEST;
    cin >> TEST;
    for (int _ = 0; _ < TEST; _++)
    {
        int n, w, d;
        cin >> n >> w >> d;
        float stack_height = d / w;
        cout << (int)ceil(n / (stack_height + 1)) << endl;
    }
}