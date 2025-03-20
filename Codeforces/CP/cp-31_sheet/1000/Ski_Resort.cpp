#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = 0;
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
                len += 1;
            else
            {
                if (len >= k)
                    ans += (long long)(len - k + 1) * (len - k + 2) / 2;
                len = 0;
            }
        }

        if (len >= k)
        {
            ans += (long long)(len - k + 1) * (len - k + 2) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}