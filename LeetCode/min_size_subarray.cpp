#include <vector>
#include <climits>
#include <iostream>
using namespace std;

// find minimum length of subarray sum >= target

// variable size sliding window
// push right all the way till sum >= target
// find tightest subarray by pushing left until <= target

int minSubArrayLen(int target, vector<int>& nums) {
        int currSum = 0;
        int minLen = INT_MAX;
        int currLen = 0;
        int j=0;
        for (int i=0; i<nums.size(); i++) {
            currSum += nums[i];
            currLen++;
            if (currSum >= target) {
                while (j < i) {
                    if (currSum - nums[j] >= target) {
                        currSum -= nums[j];
                        currLen--;
                        j++;
                    }
                    else break;
                }
                minLen = min(minLen, currLen);
            }
        }
        if (minLen == INT_MAX) {
            return 0;
        } else {
            return minLen;
        };
}

int main() {
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout << minSubArrayLen(target, nums) << endl;
}