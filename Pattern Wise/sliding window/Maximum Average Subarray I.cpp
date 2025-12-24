class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        double sum = 0;
        // step 1- first calculate the sum of window size
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double max_sum = sum;

        for (int i = k; i < n; i++) {
            // now add one element
            sum += nums[i];
            // remove one element to move the window slider
            sum -= nums[i - k];
            // store the max value
            max_sum = max(sum, max_sum);
        }
        
        return max_sum / k;
    }
};