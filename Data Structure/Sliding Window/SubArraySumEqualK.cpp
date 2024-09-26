
// * for non negative number
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {


        int n = nums.size();
        if(n == 1) return 0;
        int i = 0;
        int count = 0;
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum += nums[j];

            while( sum >= k && i <= j){
                sum-=nums[i];
                i++;
            }

            if( sum == k ){
                count++;
            }
        }
        return count;
    }
};