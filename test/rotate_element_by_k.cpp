#include <bits/stdc++.h>
using namespace std;

void reverseEle(vector<int> &arr, int start, int end)
{

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    reverseEle(nums, n - k, n);
    reverseEle(nums, 0, n - k);
    reverseEle(nums, 0, n);

    for (int it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
}