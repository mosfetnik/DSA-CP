#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "aabbbbccccddddd";
    int n = s.size();
    map<char, int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for (auto i : mpp)
    {
        char ch = i.first;
        int it = i.second;
        cout << ch << "" << it;
    }
    return 0;
}