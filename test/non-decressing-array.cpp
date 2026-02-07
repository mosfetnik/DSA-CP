#include <bits/stdc++.h>
using namespace std;


void solve(){
     
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
      
    int cnt=0;
    for(int i=0;i<n;i++){

        if(arr[i]>arr[i+1]){
         cnt++;
        }
    }
    if(cnt >1){
        cout<<"false"<<endl;;
    }
    else{
        cout<<"true"<<endl;
    }
}


int main(){

    vector<int>arr = {4,2,3};
    solve()

return 0;
}