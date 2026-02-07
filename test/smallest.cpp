#include <bits/stdc++.h>
using namespace std;

int smallestNumber(vector<int> arr)
{
    int n = arr.size();
    int small = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    return small;
}

int main()
{
    vector<int> arr = {10, 2, 4, 566, 8};
    int ans = smallestNumber(arr);
    cout << ans << endl;

    return 0;
}