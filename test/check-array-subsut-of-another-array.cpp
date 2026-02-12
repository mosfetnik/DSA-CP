#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr1 = {1, 3, 4, 5, 2};
    vector<int> arr2 = {11, 12, 13, 14, 15, 16};

    int m = arr1.size();
    int n = arr2.size();

    if (m > n) {
        cout << "arr1 is not subset of arr2";
        return 0;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;

    while (i < m && j < n) {

        if (arr1[i] == arr2[j]) {
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            cout << "arr1 is not subset of arr2";
            return 0;
        }
    }

    if (i == m)
        cout << "arr1 is subset of arr2";
    else
        cout << "arr1 is not subset of arr2";

    return 0;
}
