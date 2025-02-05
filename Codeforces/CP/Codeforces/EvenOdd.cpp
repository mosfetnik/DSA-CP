#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int givNum;
    cin >> givNum;

    if (givNum <= (n+1)/2){
         cout<< givNum * 2-1<< endl;
    }

    else{
        cout <<(givNum - (n+1) /2 )*2;
    }
    return 0;
    
}
