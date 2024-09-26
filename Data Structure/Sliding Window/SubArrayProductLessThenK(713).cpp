
class Solution
{

public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {

        int n = nums.size();
        int i = 0;
        int count = 0;
        int product = 1;

        for (int j = 0; j < n; j++)
        {

            product *= nums[j];

            while (product >= k && i <= j)
            {
                product/=nums[i];
                i++;
            }
            
            count+= j-i+1;
        }
        return count;
    }
}
