// Sort the input array nums in non-decreasing order.

// Initialize the result res with the sum of the first three elements.

// Loop through the array from index 0 to n - 3:

// For each index i, set two pointers: j = i + 1 and k = n - 1.

// While j < k:

// Calculate the sum: sum = nums[i] + nums[j] + nums[k].

// If sum is closer to target than the current res, update res.

// If sum < target, increment j to increase the sum.

// If sum > target, decrement k to decrease the sum.

// If sum == target, return target immediately (perfect match).

// After completing the loop, return res as the closest sum to the target.
#include <vector>
#include <algorithm>
#include <cstdlib>  // For abs
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = nums[0] + nums[1] + nums[2]; // Initialize with the first possible sum

        for (int i = 0; i < n - 2; ++i) {
            int j = i + 1, k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                // Update result if this sum is closer to target
                if (abs(sum - target) < abs(res - target)) {
                    res = sum;
                }

                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {
                    // Exact match
                    return target;
                }
            }
        }

        return res;
    }
};
