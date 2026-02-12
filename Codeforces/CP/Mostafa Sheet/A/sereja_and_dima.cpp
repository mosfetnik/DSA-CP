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

        cin >> arr[i];

    int i = 0;
    int j = n - 1;

    int leftSum = 0;
    int rightSum = 0;
    bool firstTurn = 1;
    while (i <= j)
    {
        int picked;
        if (arr[i] > arr[j])
        {
            picked = arr[i];
            i++;
        }
        else
        {
            picked = arr[j];
            j--;
        }

        if (firstTurn)
        {
            leftSum += picked;
        }
        else
        {
            rightSum += picked;
        }

        firstTurn = !firstTurn;
    }
    cout << leftSum << " " << rightSum << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
