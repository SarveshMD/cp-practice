// CF 313A - Ilya and Bank Account

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n<0) {
        n *= -1; // make it positive
        int last = n%10; // last digit
        int second_last = (n%100)/10; // 2nd last digit
        if (last >= second_last) {
            n /= 10;
        }
        else {
            n = (n/100)*10+(n%10);
        }
        n *= -1; // turn back into negative
    }
    cout << n;
}