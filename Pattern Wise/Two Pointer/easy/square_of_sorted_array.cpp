class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> res(n);
        int i = 0;
        int j = n - 1;
        int k = n - 1;

        while (i <= j)
        {

            if (abs(nums[i]) >
                abs(nums[j])) // compare the absloute value of number because
                              // compareing square or abs value it does not
                              // matter we can do sqaure after that anyway.
            {
            res[k] =
                    nums[i] * nums[i]; // now do square of them and push back
                                       // form the last (n-1) in array.
                i++;                   // move the pointer
            }
            else
            {
                res[k] = nums[j] * nums[j];
                j--;
            }
            k--;
        }
        return res;
    }
};