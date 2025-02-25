#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
        }

        int opp = 2 * n;
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % arr[i - 1] == 0)
            {
                arr[i]++;
            }
        }
        for(auto i :arr){
            cout<<i<< " ";
        }
        return 0;
    }