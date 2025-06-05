#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> nums)
{
    // * Make the pointers start at the first index
    int slow = nums[0];
    int fast = nums[0];

    // * Move the pointers initially:
    // * slow moves one step, fast moves two steps
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // ^ Move slow back to the start
    slow = nums[0];

    // ^ This time both slow and fast move one step at a time
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    // ^ The meeting point is the duplicate
    return fast;
}
