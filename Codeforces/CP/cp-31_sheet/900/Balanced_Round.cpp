#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (long long i = 0; i < n; i++)
            cin >> arr[i];
                
            sort(arr.begin(),arr.end());
        int count = 1, ans =1;

        for (int i = 1; i < n; i++)
        {

            if (arr[i] - arr[i - 1] > k)
            {
                count = 1;
            }
            else{
                count++;
            }
            
            ans =max(ans,count);

        }
        cout<<abs(ans-n)<<endl;
    }

    return 0;
}
