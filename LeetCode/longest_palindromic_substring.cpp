#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string substring)
{
    string rev = substring;
    cout << "substring: " << substring << "| reverse: ";
    reverse(substring.begin(), substring.end());
    cout << substring << endl;
    return rev == substring;
}

string longestPalindrome(string s)
{
    int n = s.size();
    int max_length = INT_MIN;
    int max_left = -1, max_right = -1;
    for (int i = 0; i < n; i++)
    {
        cout << "i: " << i << endl;
        // odd length
        int left = i, right = i;
        int curr_length = right - left + 1;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
            curr_length = right - left + 1;
            cout << "curr_length: " << curr_length << endl;
        }
        curr_length -= 2;
        left++;
        right--;
        if (curr_length > max_length)
        {
            max_length = curr_length;
            max_left = left;
            max_right = right;
            cout << "New Maxlength: " << max_length << endl;
        }

        // even length
        left = i, right = i + 1;
        curr_length = right - left + 1;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
            curr_length = right - left + 1;
            cout << "curr_length: " << curr_length << endl;
        }
        curr_length -= 2;
        left++;
        right--;
        if (curr_length > max_length)
        {
            max_length = curr_length;
            max_left = left;
            max_right = right;
            cout << "New Maxlength: " << max_length << endl;
        }
    }
    return s.substr(max_left, max_length);
}

int main()
{
    string s = "racebibecar";
    cout << longestPalindrome(s) << endl;
}