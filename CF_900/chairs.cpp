// 2210B. Simply Sitting on Chairs

#include <iostream>
using namespace std;

// every number is an arrow pointing to another chair
// count the number of arrows pointing backward or onto itself
    // -> these chairs, we could sit on without a problem

int main() {
    int test_cases;
    cin >> test_cases;
    for (int loop=0; loop<test_cases; loop++) {
        int n;
        cin >> n;
        int sit = 0;
        for (int i=0; i<n; i++) {
            int chair;
            cin >> chair;
            if (chair <= i+1) sit++;
        }
        cout << sit << endl;
    }
}