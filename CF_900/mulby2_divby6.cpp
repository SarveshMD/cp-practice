// 1374B - Multiply by 2, Divide by 6

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    for (int loop = 0; loop<test_cases; loop++) {

        int num;
        cin >> num;

        // write n in powers of 2 and 3
        // n = 2^(m-n) * 3^m, find minimum m+n. if not possible, -1;

        int m_minus_n = 0;
        int m = 0;

        int divided = -1;
        while (num >= 2) {
            if (divided == 0) {
                break;
            }
            divided = 0;
            if (num%2 == 0) {
                num/=2;
                m_minus_n++;
                divided++;
            }
            if (num%3 == 0) {
                num/=3;
                m++;
                divided++;
            }
        }

        int n = m - m_minus_n;
        if (num == 1 && n>=0) {
            cout << n + m << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}