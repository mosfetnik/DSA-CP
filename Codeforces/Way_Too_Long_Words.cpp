#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if ((int)s.length() > 10) {
            cout << s.front() << s.length() - 2 << s.back() << endl;
        } else {
            cout << s << endl;
        }
    }
}