#include <bits/stdc++.h>
using namespace std;

int hasing(int arr[], int n, int x)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (x == arr[i])
            count = count + 1;
        return count;
    }
}

int main()
{

    int arr[] = {1, 1, 23, 4, 5, 5, 66, 66, 6, 6, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 66;
    cout << hasing(arr, n, x) << endl;
    return 0;
}
