// 110A - Nearly Lucky Number

#include <iostream>
using namespace std;

int main() {
    long long n, lucky=0;
    cin >> n;
    while (n) {
        if (n%10 == 4 || n%10 == 7) lucky++;
        n/=10;
    }
    if (lucky==7 || lucky==4) cout << "YES";
    else cout << "NO";
}