//* brute force

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {

        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n - k; i++)
        {

            int maxlen = nums[i];

            for (int j = i; j < i + k; j++)
            {

                maxlen = max(maxlen, nums[j]);
            }
            result.push_back(maxlen);
        }
        return result;
    }
};

// using  he deque

//  story point

//  1. when new element comes num[i]  , make space for it
//  (window size can't be grater than k)

//  2. Now , when num[i] comes , there is no need to keep elements in the that window , pop them 3.
//  3 .Now push i in the deque -> for nums[i]
// 4. if (i >= k-1), the deq.front is our answer for that window

vector<int> deq;
int n = nums.size();

deque<int> deq;

vector<int> result;

// step 1
for (int i = 0; i < n; i++)
{
    while (!deq.empty() && deq.front() <= i + k)
    {
        deq.pop_front();
    }

    // step 2
    while (!deq.empty() && nums[i] > nums[deq.back()])
    {
        deq.pop_back();
    }
    // step 3

    deq.push_back(i);

    if (i >= k - 1)
    {
        result.push_back(nums[deq.front()])
    }
}

return result;
