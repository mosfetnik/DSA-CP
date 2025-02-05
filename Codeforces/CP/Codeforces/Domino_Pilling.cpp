//* C++17 (GCC 7-32)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int total = m * n;
    int domino = 2;

    int result = int(total / 2);

    cout << result;
}