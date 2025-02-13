#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long odd_sum = 0;
        long long even_sum = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)
            {
                even_sum += arr[i];
            }
            else
            {
                odd_sum += arr[i];
            }
        }

        if ((even_sum % 2 ==0  && odd_sum %2 ==0) || ((even_sum % 2 ==1  && odd_sum %2 ==1)) )
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}