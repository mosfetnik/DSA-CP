#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 == 1 || n <= 3)
        {
            cout << -1 << endl;
        }
        else
        {

            n = n / 2;
            long long temp1 = n / 3;
            if (n%3 == 2 || n%3==1){
                temp1++;
            }

            long long temp2 = n/2;
            cout<< min({temp1,temp2}) << " "<<max({temp1,temp2})<<endl;
        
        }
    }

    return 0;
}
