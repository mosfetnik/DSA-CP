
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // Start from the end and find the first index where nums[i - 1] < nums[i]
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                // Find the next greater element from the end
                for (int j = n - 1; j >= i; j--) {
                    if (nums[j] > nums[i - 1]) {
                        swap(nums[j], nums[i - 1]);
                        break;
                    }
                }

                // Reverse the suffix starting at index i
                reverse(nums.begin() + i, nums.end());
                return;
            }
        }

        // If no next permutation, just reverse the entire array
        reverse(nums.begin(), nums.end());
    }
};
