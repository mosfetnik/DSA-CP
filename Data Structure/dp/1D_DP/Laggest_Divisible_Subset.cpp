class Solution
{
public:
    //*  using bottom up
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1);
        vector<int> prev_idx(n, -1);

        int last_idx = 0;
        int maxL = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {

                if (nums[i] % nums[j] == 0)
                {
                    if (dp[i] < dp[j] + 1)
                    {
                        dp[i] = dp[j] + 1;
                        prev_idx[i] = j;
                    }

                    if (dp[i] > maxL)
                    {
                        maxL = dp[i];
                        last_idx = i;
                    }
                }
            }
        }

        vector<int> result;

        while (last_idx != -1)
        {
            result.push_back(nums[last_idx]);

            last_idx = prev_idx[last_idx];
        }

        return result;
    }
};