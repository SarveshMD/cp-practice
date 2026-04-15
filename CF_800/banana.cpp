// 546A - Soldier and Bananas

#include <iostream>
using namespace std;

int main() {
    int k, w, n;
    cin >> k >> n >> w;
    int borrow = k*w*(w+1)/2 - n;
    cout << ((borrow>0)? borrow : 0);
}
