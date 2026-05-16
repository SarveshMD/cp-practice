#include <bits/stdc++.h>
using namespace std;

int hoursForK(vector<int> &piles, int k)
{
    int hours = 0;
    for (int bananas : piles)
    {
        hours += ceil(bananas / (double)k);
    }
    return hours;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int kleft = 1;
    int kright = *max_element(piles.begin(), piles.end());
    int minK = INT_MAX;
    while (kleft <= kright)
    {
        int k = (kleft + kright) / 2;
        int hours = hoursForK(piles, k);
        if (hours <= h)
        {
            minK = min(minK, k);
            kright = k - 1;
        }
        else
        {
            kleft = k + 1;
        }
    }
    return minK;
}

int main()
{
    vector<int> piles = {1, 4, 3, 2};
    int h = 9;
    int minK = minEatingSpeed(piles, h);
    cout << minK << endl;
}