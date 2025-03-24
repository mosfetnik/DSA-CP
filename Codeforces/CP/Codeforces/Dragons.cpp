#include <algorithm>
#include <iostream>
#include <utility>

using namespace std;

const int maxn = 1000;

pair<int, int> arr[maxn];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int s, n; cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (s <= arr[i].first)
        {
            cout << "NO\n";
            return 0;
        }
        else
        {
            s += arr[i].second;
        }
    }
    cout << "YES\n";
}