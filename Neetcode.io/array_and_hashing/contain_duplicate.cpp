#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<int> stt;

    for (int i = 0; i < n; i++)
    {
        if (stt.count(arr[i]))
            return true;
        stt.insert(arr[i]);
    }
    return false;
}

int main()
{
    int t=1;
    cin >> t;
    while (t--)
        solve();
    if (solve)
        cout << "YES";
    cout << "NO";
    return 0;
}