#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    int maxi = INT_MIN;
    int one = 0;
    int two = 0;
    while (i <= j)
    {

        maxi = max(arr[i], arr[j]);
        if (arr[i] < arr[j])
        {
            two += maxi;
            j--;
        }
        else
        {
            one += maxi;
            i++;
        }
    }
    cout << one << " " << two << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
