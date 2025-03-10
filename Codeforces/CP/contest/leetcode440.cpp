#include <bits/stdc++.h>
using namespace std;

// int countUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
// {
//     int n = fruits.size();
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int j;
//         for (j = 0; j < n; j++)
//         {
//             if (baskets[j] >= fruits[i])
//             {
//                 baskets[j] = -1;
//                 break;
//             }
//         }
//         if (j == n)
//         {

//             count++;
//         }
//     }

//     return count;
// }

// // Example Usage
// int main()
// {
//     vector<int> fruits = {3, 1, 5, 2};
//     vector<int> baskets = {2, 3, 4, 6};

//     int unplaced = countUnplacedFruits(fruits, baskets);

//     cout << "Unplaced fruit types: " << unplaced << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int countUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
// {
//     int n = fruits.size();
//     vector<int> copy_arr = baskets;
//     int count = 0;

//     sort(copy_arr.begin(), copy_arr.end());

//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         while (j < n && copy_arr[j] < fruits[i])
//         {
//             j++;
//         }
//         if (j == n)
//         {
//             count++;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     return count;
// }

// // Example Usage
// int main()
// {
//     vector<int> fruits = {98,63};
//     vector<int> baskets = {67,85};

//     int unplaced = countUnplacedFruits(fruits, baskets);

//     cout << "Unplaced fruit types: " << unplaced << endl;
//     return 0;
// }


int n = nums1.size();
vector<long long> ans(n);

for (int i = 0; i < n; i++) {
    
    vector<int> val;
    for (int j = 0; j < n; j++) {
        if (nums1[j] < nums1[i]) {
            val.push_back(nums2[j]);
        }
    }
    
    
    sort(values.rbegin(), values.rend());

    long long sum = 0;
    int count = values.size() < k ? values.size() : k;
    for (int j = 0; j < count; j++) {
        sum += values[j];
    }
    
    answer[i] = sum;
}

return answer;