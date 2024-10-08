#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

void counting()
{

    if (cnt == 10)
    {
        return;
    }
    else
    {
        cout << cnt << endl;
    }
    cnt++;
    counting();
}

//  sum of natural number

// int sumOf( int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {

//         return n + sumOf(n - 1);
//     }
// }

// factorial of n

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// reverse a array

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

}

void reverseArray(int arr[], int start, int end)
{

    if (start < end)
    {
        swap(arr[start], arr[end]);
       reverseArray(arr, start+1,end-1);
    }
}

int main()
{
    int n = 5;
    int arr[]={5,1,3,2,1};
    reverseArray( arr, 0,n-1);
    printArray(arr,n);
    return 0;
}