// using slow and fast pointerclass Solution {
public:
int findDuplicate(std::vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];

    // Find the intersection point of the two pointers
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Find the entrance of the cycle
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}
}
;

class Solution
{
public:
    int findDuplicate(std::vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];

        // Find the intersection point of the two pointers
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Find the entrance of the cycle
        slow = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

// O(nlogn)
// O(1)
// Binary Search
class Solution
{
public:
    int findDuplicate(std::vector<int> &nums)
    {
        int left = 1;
        int right = nums.size() - 1;

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            int count = 0;

            // Count the numbers less than or equal to mid
            for (int num : nums)
            {
                if (num <= mid)
                {
                    count++;
                }
            }

            // If count is greater than mid, the duplicate lies in the left half
            if (count > mid)
            {
                right = mid;
            }
            else
            { // Otherwise, it lies in the right half
                left = mid + 1;
            }
        }

        return left;
    }
};

// using map
// O(n)
// O(n)

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        unordered_map<int, int> mpp;

        for (auto &it : nums)
        {
            mpp[it]++;
        }

        for (auto &it : mpp)
        {
            if (it.second > 1)
            {
                return it.first;
            }
        }
        return 0;
    }
};