#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> twoSum(vector<int>& nums, int left, int right, int target) {
    int i=left, j=right;
    vector<vector<int>> solutions;
    while (i < j) {
        if (i > left && nums[i] == nums[i-1]) {
            i++;
            continue;
        }
        if (j < right-1 && nums[j] == nums[j+1]) {
            j--;
            continue;
        }
        int couple = nums[i] + nums[j];
        if (couple == target) {
            solutions.push_back(vector<int> {nums[i], nums[j]});
            i++;
        }
        else if (couple < target) i++;
        else j--;
    }
    return solutions;
}

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
        vector<vector<int>> twoSumSols = twoSum(nums, i+1, n-1, -1*nums[i]);
        for (auto sol: twoSumSols) {
            total_sols.push_back(vector<int> {nums[i], sol[0], sol[1]});
        }
        i++;
    }
    return total_sols;
}

int main() {
    vector<int> nums = {0,0,0};
    sort(nums.begin(), nums.end());
    vector<vector<int>> three_sum;
    three_sum = threeSum(nums);
    cout << "Three Sum: " << endl;
    for (auto sol: three_sum) {
        cout << sol[0] << " " << sol[1] << " " << sol[2] << endl;
    }

}