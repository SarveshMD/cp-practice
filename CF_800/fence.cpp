// CF 677A - Vanya and Fence

#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int ai, minWidth=0;
    for (int i=0; i<n; i++) {
        cin >> ai;
        if (ai > h) minWidth+=2;
        else minWidth++;
    }
    cout << minWidth << endl;
}