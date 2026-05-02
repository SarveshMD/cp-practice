#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums) // O(n^2)
{
    int n = nums.size();
    vector<bool> valid(n, false);
    valid[n - 1] = true;

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= nums[i] && i + j < n; j++)
        {
            if (valid[i + j])
            {
                valid[i] = true;
                break;
            }
        }
    }
    for (auto out : valid)
    {
        cout << out << " ";
    }
    cout << endl;
    return valid[0];
}

bool canJump_again(vector<int> &nums) // O(n)
{
    int n = nums.size();
    int max_reach = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (max_reach < i)
            return false;
        max_reach = max(max_reach, i + nums[i]);
    }
    cout << max_reach << endl;
    return max_reach >= n - 1;
}

int main()
{
    vector<int> nums = {1, 1, 0, 4, 9, 7};
    cout << "OUT: " << canJump(nums) << endl;
    cout << "O(n): " << canJump_again(nums) << endl;
}