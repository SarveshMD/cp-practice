#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int i=0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> total_sols;
    while (i < n-2) {
        if (i>0 && nums[i] == nums[i-1]) {
            i++;
            continue;
        }
        int j = i+1;
        int k = n-1;
        int target = -1*nums[i];
        while (j < k) {
            if (j > i+1 && nums[j] == nums[j-1]) {
                j++;
                continue;
            }
            if (k < n-1 && nums[k] == nums[k+1]) {
                k--;
                continue;
            }
            int couple = nums[j] + nums[k];
            if (couple == target) {
                total_sols.push_back(vector<int> {nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if (couple < target) j++;
            else k--;
        }
        i++;
    }
    return total_sols;
}

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> three_sum;
    three_sum = threeSum(nums);
    cout << "Three Sum: " << endl;
    for (auto sol: three_sum) {
        cout << sol[0] << " " << sol[1] << " " << sol[2] << endl;
    }

}