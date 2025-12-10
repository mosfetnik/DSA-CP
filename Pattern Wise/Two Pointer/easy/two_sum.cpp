//  * using hashmap 
//* Time complexity - O(n)
//* Space complexity - O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int, int> mpp(n);

        for (int i = 0; i < n; i++) {

            int req = target - nums[i];

            if (mpp.find(req) != mpp.end()) {    // ^ finding in the map
                return {mpp[req], i};
            }
            mpp[nums[i]] = i;                   // ^ assign the index 
        }
        return {};
    }
};