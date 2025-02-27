#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     long long t;
//     cin >> t;

//     while (t--)
//     {
//         long long start, end;
//         cin >> start >> end;
       

//         for (long long i = 1; i < end+1; i++)
//         {
//             if (start % 2 == 0)
//             {
//                 start -=i;
//             }
//             else{
//                 start+=i;
//             }
//         }
//         cout<<start<<"\n";
//     }

//     return 0;
// }


// * TLE aa gya

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x0, n;
        cin >> x0 >> n;
        
        long long d;
        if (n % 4 == 0) d = 0;
        else if (n % 4 == 1) d = n;
        else if (n % 4 == 2) d = -1;
        else d = -n - 1;

        cout << (x0 % 2 == 0 ? x0 - d : x0 + d) << endl;
    }

    return 0;
}
