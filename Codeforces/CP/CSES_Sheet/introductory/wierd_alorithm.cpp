#include<bits/stdc++.h>
using namespace std;

void solve()
{

    long long n;
    cin >> n;

    vector<long long> arr;
    arr.push_back(n);

    while (n != 1)
    {

        if (n % 2 == 0)
            n = n / 2;

        else
            n = (n * 3) + 1;

        arr.push_back(n);
    }

    for (long long i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{

    solve();

    return 0;
}
