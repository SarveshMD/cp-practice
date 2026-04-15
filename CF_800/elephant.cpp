// 617A - Elephant

#include <iostream>
using namespace std;

int main() {
    int dist, steps;
    cin >> dist;
    steps = dist/5 + ((dist%5)?1:0);
    cout << steps << endl;
}