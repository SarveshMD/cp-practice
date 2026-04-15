// 318A - Even Odds

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if (n%2 == 0)
        if (k <= (n)/2)
            cout << k*2 - 1;
        else
            cout << k*2 - n;
    else
        if (k <= (n+1)/2)
            cout << k*2 - 1;
        else
            cout << k*2 - n - 1;
}