#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n){

    int i=0; 
    for(int j =1;j<n;j++ ){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j]
        }
    }
    return i+1;
}
int main()