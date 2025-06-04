#include <bits/stdc++.h>
using namespace std;

// * https://robertocannella-f5b4b.web.app/coding-challenges/sorted-squares

// get the link to watch the animation
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> ans(n);

        int i = 0;
        int j = n - 1;
        int pos = n - 1;

        while (i <= j)
        {
            // using two pointers
            // also take the extra variable to whiach can store the value of position of current value and always
            // decrement it , to maintain the order of sorting.
            int iSqr = (nums[i] * nums[i]);
            int jSqr = (nums[j] * nums[j]);

            if (iSqr < jSqr)
            {
                ans[pos] = jSqr;

                j--;
            }
            else
            {
                ans[pos] = iSqr;
                i++;
            }
            pos--;
        }
        return ans;
    }
};