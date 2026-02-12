#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s = " take12% *&u ^$#forward";
    string res ="";

    for( char c : s){
        if(( c >='a' && c <='z') || ( c >='A' && c <='Z')) {
            res.push_back(c);
        }
    }
    cout<< res;



    return 0;
}