// 160A - Twins

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int sum = 0;

    for (int i=0; i<n; i++) {
        cin >> nums[i];
        sum += nums[i];
    }
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });
    int my_money = 0, coins = 0;
    for (int i=0; i<n; i++) {
        my_money += nums[i];
        coins++;
        if (my_money > sum - my_money) break;
    }
    cout << coins << endl;
}