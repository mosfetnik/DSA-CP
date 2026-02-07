#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    unordered_map<int, int> mpp;
    int cnt = 0;
    int sum = 0;
    mpp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cnt += mpp[sum - k];
        mpp[sum]++;
    }
    cout << cnt << endl;

    return 0;
}
