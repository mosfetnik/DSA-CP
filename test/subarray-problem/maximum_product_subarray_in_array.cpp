#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxProd = 0;

    for (int i = 0; i < n; i++)
    {
        int prod = 0;
        for (int j = i + 1; j < n; j++)
        {
            prod = arr[i] * arr[j];
            maxProd = max(maxProd, prod);
        }
    }
    cout << maxProd << endl;
    return 0;
}