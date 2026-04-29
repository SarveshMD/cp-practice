#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    unordered_map<int, int> factors;
    while (num % 2 == 0)
    {
        factors[2]++;
        num /= 2;
    }
    long long i = 3;
    while (i * i <= num)
    {
        while (num % i == 0)
        {
            factors[i]++;
            num /= i;
        }
        i += 2;
    }
    if (num > 1)
    {
        factors[num]++;
    }
    for (auto item : factors)
    {
        if (item.second % 2 == 1)
            return false;
    }
    return true;
}

int main()
{
    cout << isPerfectSquare(1948) << endl;
    cout << isPerfectSquare(49) << endl;
    cout << isPerfectSquare(36) << endl;
    cout << isPerfectSquare(1225) << endl;
    cout << isPerfectSquare(1226) << endl;
}