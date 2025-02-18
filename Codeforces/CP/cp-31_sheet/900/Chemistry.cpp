#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        unordered_map<char, int> mpp;

        for (char ch : str)
            mpp[ch]++;

        int oddCount = 0;
        for (auto &pair : mpp)
        {
            if (pair.second % 2 != 0)
                oddCount++;
        }

        if (oddCount > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}