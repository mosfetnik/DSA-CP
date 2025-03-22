#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = max({a + b + c, a * b * c, (a + b) * c, a * (b + c)});

    cout << result << '\n';
    return 0;
}
