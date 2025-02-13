#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n>> k;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            if (ele == k)
            {
                flag = true;
            }
        }
        if (flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}