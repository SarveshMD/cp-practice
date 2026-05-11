#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> maxLeft(n, 0);
    vector<int> maxRight(n, 0);
    for (int i = 1; i < n; i++)
    {
        maxLeft[i] = max(maxLeft[i - 1], height[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        maxRight[i] = max(maxRight[i + 1], height[i + 1]);
    }
    int totalTrap = 0;
    for (int i = 1; i < n - 1; i++)
    {
        totalTrap += max(0, min(maxLeft[i], maxRight[i]) - height[i]);
    }
    return totalTrap;
}

int trap_two_pointer(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxL = height[left], maxR = height[right];
    int totalStored = 0;
    while (left < right)
    {
        int bottleneck = min(maxL, maxR);
        if (maxL <= maxR)
        {
            int stored = max(0, bottleneck - height[left]);
            totalStored += stored;
            left++;
        }
        else
        {
            int stored = max(0, bottleneck - height[right]);
            totalStored += stored;
            right--;
        }
        maxL = max(maxL, height[left]), maxR = max(maxR, height[right]);
    }
    return totalStored;
}

int main()
{
    vector<int> height = {0, 2, 0, 3, 1, 0, 1, 3, 2, 1};
    int trapped = trap(height);
    int trapped_twoptr = trap_two_pointer(height);
    cout << trapped << endl;
    cout << trapped_twoptr << endl;
}