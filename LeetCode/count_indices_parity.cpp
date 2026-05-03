#include <bits/stdc++.h>
using namespace std;

vector<int> countOppositeParity(vector<int> &nums)
{
    int n = nums.size();
    vector<int> answer(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (nums[i] % 2 != nums[j] % 2)
                answer[i]++;
        }
    }
    return answer;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> scores = countOppositeParity(nums);
    for (int s : scores)
    {
        cout << s << " ";
    }
    cout << endl;
}