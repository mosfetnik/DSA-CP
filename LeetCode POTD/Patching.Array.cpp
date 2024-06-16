// Given a sorted integer array nums and an integer n, add/patch elements to the array such that any number in the range [1, n] inclusive can be formed by the sum of some elements in the array.

// Return the minimum number of patches required.



class Solution {
public:
    int minPatches(vector<int>& nums, int n) {

       
        long maxReach = 0;
        int patch = 0;
        int i = 0;

        while ( maxReach < n){
            if( i< nums.size() && nums[i]<=maxReach+1){
                maxReach+=nums[i];
                i++;
            }
            else{

                maxReach +=(maxReach+1);
                patch++;
            }
        }
        return patch;
    }
};