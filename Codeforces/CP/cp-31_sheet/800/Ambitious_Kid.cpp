#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long minimum = INT_MAX;

     
    for (int i = 0; i < n; i++)
    {
      
        minimum = min(abs(arr[i]), minimum);
    }
    cout<<minimum<<"\n";
    return 0;
}