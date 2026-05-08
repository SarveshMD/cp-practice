#include <bits/stdc++.h>
using namespace std;

string encode(vector<string> &strs)
{
    string outString = "";
    for (string str : strs)
    {
        for (char c : str)
        {
            if (c == '\\')
            {
                outString += "\\\\";
            }
            else
            {
                outString += c;
            }
        }
        outString += "\\b";
    }
    return outString;
}

vector<string> decode(string s)
{
    vector<string> out;
    string curr = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '\\' && i != s.size() - 1)
        {
            if (s[i + 1] == '\\')
            {
                i++;
                curr += "\\";
            }
            else if (s[i + 1] == 'b')
            {
                i++;
                out.push_back(curr);
                curr = "";
            }
        }
        else
        {
            curr += s[i];
        }
    }
    return out;
}

string encodeN(vector<string> &strs)
{
    string outString = "";
    for (string str : strs)
    {
        outString += to_string(str.size()) + "#" + str;
    }
    return outString;
}

vector<string> decodeN(string s)
{
    vector<string> res;
    int i = 0;
    while (i < s.size())
    {
        int j = 0;
        while (s[i + j] != '#')
        {
            j++;
        }
        int len = stoi(s.substr(i, j));
        res.push_back(s.substr(i + j + 1, len));
        i += j + len + 1;
    }
    return res;
}

int main()
{
    vector<string> strs = {"hey", "there", "\\break", "\\\\break", "hello\\bworld"};
    string encoded = encode(strs);
    cout << encoded << endl;
    vector<string> decoded = decode(encoded);
    for (string str : decoded)
    {
        cout << str << " ";
    }
    cout << endl;

    strs = {"hey", "thisisamultipledigitlengthword", "how", "you", "doing"};
    encoded = encodeN(strs);
    cout << encoded << endl;
    decoded = decodeN(encoded);
    for (string str : decoded)
    {
        cout << str << " ";
    }
    cout << endl;
}