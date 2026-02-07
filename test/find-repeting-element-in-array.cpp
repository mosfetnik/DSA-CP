#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 1, 2, 3, 4, 5, 5, 6, 6};
    unordered_map<int, int> mpp;
    vector<int> repeating;
    vector<int> non_repeating;


    for (auto it : arr)
    {
        mpp[it]++;
    }

    for (auto it : mpp)
    {
        if( it.second > 1){
            repeating.push_back(it.first);
        }
    }
    cout<< "Repeating Element :" <<endl;
    for(int it :repeating){
        cout<< it <<" ";
    }

    return 0;
}