#include <bits/stdc++.h>
using namespace std;

// ascai value = A - Z = 65 -96
// ascai value = a - z = 97 -123

int main()
{
    int n;
    cin >> n;
    string prev, curr;
    cin >> prev;

    int cnt = 1;

    for (int i = 2; i <= n; i++)
    {
        cin >> curr;
        if (curr != prev)
            cnt++;

        prev = curr;
    }
    cout << cnt << endl;

    return 0;
}
