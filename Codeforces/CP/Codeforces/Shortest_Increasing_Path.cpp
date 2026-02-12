#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
    
    int x,y;
    cin>>x>>y;
    
    if( x < y){
        cout<< 2<<endl;
    }
    else if( x > (y+1) && y >1){
        cout<<3<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return;
}
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
   