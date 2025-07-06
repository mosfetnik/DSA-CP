// * brute force nlogn

// #include <bits/stdc++.h>
// using namespace std;

// bool solve()
// {
//     string s, t;
//     cin >> s;
//     cin >> t;

//     int m = s.size();
//     int n = t.size();
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     if (m != n)
//         return false;
//     bool flag = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] != t[i])
//             flag = 1;
//     }
//     if (flag)
//         return false;
//     else
//         return true;
// }

// int main()
// {
//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool solve() {
    string s, t;
    cin >> s;
    cin >> t;
    
    int m = s.size();
    int n = t.size();
    
    // If lengths are different, they can't be anagrams
    if (m != n) return false;
    
    vector<int> freqTable(256, 0);
    
    for (int i = 0; i < m; i++)
        freqTable[s[i]]++;
    for (int i = 0; i < n; i++)
        freqTable[t[i]]--;
    
    for (int i = 0; i < 256; i++) {
        if (freqTable[i] != 0)
            return false;
    }
    return true;
}

int main() {
    int t=1;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}