#include <bits/stdc++.h>
using namespace std;

// constant 'k' sized sliding window

double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    double currAvg = 0;
    for (int j=0; j<k; j++) {
        currAvg += nums[j];
    }
    currAvg /= k;
    double maxAvg = currAvg;
    for (int i=1; i<=n-k; i++) {
        currAvg *= k;
        currAvg = currAvg - nums[i-1] + nums[i+k-1];
        currAvg /= k;
        if (currAvg > maxAvg) {
            maxAvg = currAvg;
        }
    }
    return maxAvg;
}

int main() {
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    cout << findMaxAverage(nums, k) << endl;
}