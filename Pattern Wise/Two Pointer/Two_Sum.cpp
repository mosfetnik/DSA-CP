
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res[0] = i;
                    res[1] = j;
                }
            }
        }
        return res;
    }
};

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {

            int val = target - nums[i];

            if (mpp.count(val))
            {
                return {mpp[val], i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};