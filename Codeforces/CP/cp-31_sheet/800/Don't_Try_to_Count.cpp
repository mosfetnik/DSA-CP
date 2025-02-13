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
        string x, s;
        cin >> x >> s;
        bool flag =0;
        int count =0;
       
        for (int i = 0; i < 6; i++)
        {
            if (x.find(s) != string::npos) // s was found inside the string
            {
                flag =1;
                break;
            }
            count++;
            x += x;
        }
        if(flag ==1){
            cout<<count<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}