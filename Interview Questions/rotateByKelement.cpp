#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end)
{

    while (start <= end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateRightK(int arr[], int n, int k)
{

    Reverse(arr, n - k, n); //Rotate first 'k' element
    Reverse(arr, 0, n - k); //Rotate first 'n-k' element
    Reverse(arr, 0, n); // Rotate the whole array
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    int n = 7;
    rotateRightK(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
