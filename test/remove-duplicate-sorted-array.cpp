#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> arr = {1, 2, 2, 3, 3, 4, 4, 4, 5};

    int j = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[j]) // when two value are different 
        {
            j++;  // get unique value and increment the j
            arr[j] = arr[i]; // replace unique value
        }
    }

    for (int i = 0; i <= j; i++)
        cout << arr[i] << " ";
}

int main()
{
    solve();
    return 0;
}
