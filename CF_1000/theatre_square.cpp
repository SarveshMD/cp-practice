// CF 1A - Theatre Square [1st 1000]

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n,m,a;
    cin >> n >> m >> a;
    cout << (long long) (ceil((long double)n/a) * ceil((long double)m/a)) << endl;
}