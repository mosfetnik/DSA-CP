

#include <bits/stdc++.h>
using namespace std;

int maxEle(int arr[],int n)
{
    
    int max = arr[0];

        for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr1[]={3,4,23,54,56,-2};
    int n= 6;
    int maxValue=maxEle(arr1,n);
    cout<<maxValue;
}