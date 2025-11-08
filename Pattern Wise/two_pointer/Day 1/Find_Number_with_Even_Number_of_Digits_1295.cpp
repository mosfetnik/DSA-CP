class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int n = nums.size();

        int even_cnt = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            while (nums[i] > 0) {
                nums[i] = nums[i] / 10;
                cnt++;
            }
            if (cnt % 2 == 0) {
                even_cnt++;
            }
        }
        return even_cnt;
    }
};