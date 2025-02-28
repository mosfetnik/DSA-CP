#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long count = 0;

        for (long long i = 0; i < n+1; i++)
        {
            if (i % 3 == i % 5)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}