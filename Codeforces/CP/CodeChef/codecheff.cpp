// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;

//     if (s == "WECNITK")
//     {
//         cout << "Welcome to Web Club!" << endl;
//     }
//     else
//     {
//         cout << "Access Denied" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;

        vector<int> result(n);
        long long count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> result[i];
            count += result[i];
        }

        int minBot = (count + x - 1) / x;

        cout << minBot << endl;

    }
        return 0;
}