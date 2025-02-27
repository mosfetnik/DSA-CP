#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long start, end;
        cin >> start >> end;
       

        for (long long i = 1; i < end+1; i++)
        {
            if (start % 2 == 0)
            {
                start -=i;
            }
            else{
                start+=i;
            }
        }
        cout<<start<<"\n";
    }

    return 0;
}
