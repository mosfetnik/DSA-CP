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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        int ops = 0;
        for (int i = 0; i < n-1; i++)
        {

            if (arr[i] % 2 == arr[i + 1] % 2)
            {
                ops++;
            }
        }
        cout << ops << endl;
    }
}