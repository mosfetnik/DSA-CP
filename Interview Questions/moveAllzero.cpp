#include <bits/stdc++.h>
using namespace std;

vector <int>moveAllzero(vector<int> arr, int n)
{
    // find the first zero
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    // for non-zero arry
    if (j == -1)
        return arr;

    // find the non-zero and swap

    for (int i = j + 1 ; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){

   vector <int> arr= {1,23,4,0,66,0,44,2,0};
    int n=9;
    vector<int> ans = moveAllzero(arr,n);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}