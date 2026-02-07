#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int n = nums.size();

        int maxi = nums[0];
        int ans = nums[0];

        for (int i = 1; i < n; i++)
        {

            maxi = max(nums[i], maxi + nums[i]);
            ans = max(ans, maxi);
        }
        return ans;
    }
};