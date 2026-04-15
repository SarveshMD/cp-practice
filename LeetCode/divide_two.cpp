#include <cmath>
#include <iostream>
using namespace std;

long long divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    long long quotient = 0;
    bool negative = (dividend >= 0) ^ (divisor >= 0);
    long long longdend = llabs((long long)dividend);
    long long longsor = llabs((long long)divisor);
    while (longdend >= longsor) {
        long long sor = longsor;
        long long q = 1;
        while (sor <= longdend>>1) {
            sor = sor << 1;
            q = q << 1;
        }
        longdend -= sor;
        quotient += q;
    }
    quotient = quotient * (negative?-1:1);
    return quotient;
}


int main() {
    cout << divide(10, -3) << endl;
    cout << divide(10, 3) << endl;
    cout << divide(20, 5) << endl;
    cout << divide(20, 4) << endl;
    cout << divide(20, 3) << endl;
    cout << divide(7, -3) << endl;
    cout << divide(1,1) << endl;
    cout << divide(-2147483648,-1) << endl;
    cout << divide(-2147483648,1) << endl;
}