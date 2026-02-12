#include <iostream>  
#include <string>    
#include <algorithm> 

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k; 
    string s;
    cin >> s; 

    string reversed = s;
    reverse(reversed.begin(), reversed.end()); 

    
    
    if (s < reversed || (k >= 1 && *min_element(s.begin(), s.end()) != *max_element(s.begin(), s.end())))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        solve(); 
    }
    return 0;
}
