// 217A - Beautiful Year

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    for (int i=year+1; ; i++) {
        int d1 = i%10;
        int d2 = i%100 / 10;
        int d3 = i%1000 / 100;
        int d4 = i/1000;
        if (d1!=d2 && d1 != d3 && d1 != d4 && d2!=d3 && d2!=d4 && d3!=d4) {
            cout << i;
            break;
        }
    }
}