#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    int n;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    if(ch=='g'){
        cout<<0<<endl;
        return 0;
    }
 
    int first=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            first=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            int count=0,flag=0;
            for(int j=i+1;j<n;j++){
                count++;
                if(s[j]=='g'){
                    flag++;
                    break;
                }
            }
            i=i+count;
            if(flag){
                ans=max(ans,count);
            }
            else{
                ans=max(ans,count+1+first);
            }
        }
    }
    cout<<ans<<endl;        
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}