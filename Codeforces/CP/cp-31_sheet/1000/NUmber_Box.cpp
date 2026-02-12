#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        long long total_abs_sum = 0;
        int neg_count = 0;
        int min_abs_val = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int val;
                cin >> val;

                total_abs_sum += abs(val);
                if (val < 0)
                    neg_count++;
                min_abs_val = min(min_abs_val, abs(val));
            }
        }

        if (neg_count % 2 == 0)
        {
            cout << total_abs_sum << endl;
        }
        else
        {
            cout << total_abs_sum - 2 * min_abs_val << endl;
        }

    }
    return 0;
}
