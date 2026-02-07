

#include <bits/stdc++.h>
using namespace std;

int largestNumber(vector<int> arr)
{
    int n = arr.size();
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}