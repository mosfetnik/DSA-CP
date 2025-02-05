#include <bits/stdc++.h>

using namespace std;

int main()
{
    int costOfBanana;
    int initDoller;
    int noOfBananaWants;

    cin >> costOfBanana;
    cin >> initDoller;
    cin >> noOfBananaWants;

    int totalSum = 0;
    for (int i = 1; i <= noOfBananaWants; i++)
    {
        totalSum += costOfBanana * i;
    }

    if(totalSum - initDoller <= 0){
        cout<< 0 <<"\n";
    }
    else{

    cout<< totalSum - initDoller;
    }

}