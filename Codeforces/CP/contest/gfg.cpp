#include <iostream>
#include <vector>

// int countXORPairs(const std::vector<int>& arr) {
//     int n = arr.size();
    
//     // The maximum possible XOR value will be (n-1)^(n-1) which is 0
//     // The minimum could be 0, so the range is [0, 2*n-1]
//     // This is because the maximum value in arr is (n-1), and the maximum index is (n-1)
//     std::vector<int> freq(2 * n, 0);
    
//     // Count frequency of (arr[i] ^ i)
//     for (int i = 0; i < n; i++) {
//         int val = arr[i] ^ i;
//         freq[val]++;
//     }
    
//     // Calculate pairs
//     int totalPairs = 0;
//     for (int count : freq) {
//         totalPairs += (count * (count - 1)) / 2;
//     }
    
//     return totalPairs;
// }

// int main() {
//     // Example usage
//     std::vector<int> arr = {0, 1, 2, 3}; // A sample permutation
//     std::cout << "Number of pairs: " << countXORPairs(arr) << std::endl;
    
//     return 0;
// }


int findMEX(vector<int>& arr) {
    int n= arr.size();

    int count =0;

    for(int i=0;i<n-1;i++){

        for(int j=i;j<n;j++){
          
        }
    }
    
}