#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> num_index;
    for (int i=0; i<nums.size(); i++) {
        int j = num_index[nums[i]];
        cout << "j: " << j << endl;
        if (j!=0 && abs(j-1-i) <= k) return true;
        num_index[nums[i]] = i+1;
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    if (containsNearbyDuplicate(nums, k)) cout << "True";
    else cout << "False";
}