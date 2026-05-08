#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{ // O(n + nlogn + k) time in worst case
    unordered_map<int, int> frequencies;
    for (int i : nums)
    {
        frequencies[i]++;
    }
    vector<pair<int, int>> fvec(frequencies.begin(), frequencies.end());
    sort(fvec.begin(), fvec.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(fvec[i].first);
    }
    return ans;
}

vector<int> topKFrequentHeap(vector<int> &nums, int k)
{ // O(n + nlogn + klogn) time - worse than the previous implementation
    priority_queue<pair<int, int>> pq;
    map<int, int> frequencies;
    for (int i : nums)
    {
        frequencies[i]++;
    }
    for (auto pr : frequencies)
    {
        pq.push(pair<int, int>(pr.second, pr.first));
    }
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

vector<int> topKFrequentBucketSort(vector<int> &nums, int k)
{ // BEST: O(n+n+n+k) time
    vector<vector<int>> bucket(nums.size() + 1);
    unordered_map<int, int> frequencies;
    for (int i : nums)
    {
        frequencies[i]++;
    }
    for (auto item : frequencies)
    {
        bucket[item.second].push_back(item.first);
    }
    vector<int> ans;
    for (int i = nums.size(); i >= 1 && k > 0; i--)
    {
        if (!bucket[i].empty())
        {
            for (int num : bucket[i])
            {
                ans.push_back(num);
                k--;
                if (k == 0)
                    break;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    vector<int> topK = topKFrequentBucketSort(nums, 2);
    for (int i : topK)
    {
        cout << i << " ";
    }
    cout << endl;
}