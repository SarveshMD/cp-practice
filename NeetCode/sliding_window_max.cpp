#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k) // O(n*k) solution
{
    int n = nums.size();
    vector<int> res(n - k + 1);
    for (int i = 0; i < n - k + 1; i++)
    {
        int currMax = INT_MIN;
        for (int j = 0; j < k; j++)
        {
            currMax = max(currMax, nums[i + j]);
        }
        res[i] = currMax;
    }
    return res;
}

vector<int> maxSlidingWindow_efficient(vector<int> &nums, int k) // O(n) solution
{
    deque<int> dq;
    int n = nums.size();
    vector<int> res;
    int l = 0, r = 0;

    while (r < n)
    {
        while (!dq.empty() && nums[dq.back()] < nums[r])
        {
            dq.pop_back();
        }
        dq.push_back(r);

        if (l > dq.front())
        {
            dq.pop_front();
        }

        if (r + 1 >= k)
        {
            res.push_back(nums[dq.front()]);
            l += 1;
        }
        r += 1;
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 1, 0, 4, 2, 6};
    vector<int> out = maxSlidingWindow_efficient(nums, 3);
    // vector<int> nums = {1, -1};
    // vector<int> out = maxSlidingWindow_efficient(nums, 1);

    for (int i : out)
    {
        cout << i << " ";
    }
    cout << endl;
}