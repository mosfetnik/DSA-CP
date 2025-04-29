
#include <bits/stdc++.h>
#define ll long long int
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    faster;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y, a;
        cin >> x >> y >> a;

        int rem = a % (x + y);   // find the remaing work if rem > x than y win else x win 
        if (rem == 0 || rem < x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
