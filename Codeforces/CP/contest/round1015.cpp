// #include <bits/stdc++.h>
// using ll = long long int;
// #define endl '\n'
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     int max = 0;

//     if (n & 1)
//     {
//         cout << n << ' ';
//         for (int i = 1; i < n; ++i)
//         {
//             cout << i << " ";
                 
//         }
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
   
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using ll = long long int;
#define endl '\n'
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    vector<ll>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     sort(arr.begin(),arr.end());

     
   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
