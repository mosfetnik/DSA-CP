#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> a = b;

        sort(a.begin(), a.end());

        vector<long long> pref(n);
        pref[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            pref[i] = a[i] + pref[i - 1];
        }

        vector<int> check(n, 0);

        for (int j = n - 2; j >= 0; j--)
        {
            if (pref[j] >= a[j + 1])
                check[j] = 1 + check[j + 1];
        }

        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++)
            mpp[a[i]] = i + check[i];

        for (int i = 0; i < n; i++)
            cout << mpp[b[i]] << " ";

        cout << endl;
    }
}