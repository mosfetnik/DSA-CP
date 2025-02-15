#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int pos = 0;
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                pos++;
            else
                neg++;
        }
    
        // * 1. sum>= 0;
        // * 2. product =1;

        if(pos >= neg){
             
            if(neg%2 ==1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
            
        }
        else{
            int ops = neg - n/2;

            if((n/2)%2 == 1){
                ops+=1;
            }
            cout<<ops<<endl;
        }

    }
    return 0;
}