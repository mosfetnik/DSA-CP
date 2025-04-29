// O(n) time
//O(n)  space
 //using counting sort
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int count_0 = 0;
            int count_1 = 0;
            int count_2 = 0;
            int n = nums.size();
    
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0)
                    count_0++;
                else if (nums[i] == 1)
                    count_1++;
                else
                    count_2++;
            }
    
            for (int i = 0; i < count_0; i++) {
                nums[i] = 0;
            }
            for (int i = count_0; i < count_0 + count_1; i++) {
                nums[i] = 1;
            }
            for (int i = count_0 + count_1; i < n; i++) {
                nums[i] = 2;
            }
        }
    };

    // using dutch natioon algorithm 
// Idea
// Think of the array as divided into three parts:

// Left part → All 0s (nums[0] to nums[low - 1])

// Middle part → All 1s (nums[low] to nums[mid - 1])

// Right part → All 2s (nums[high + 1] to nums[end])

// We move through the array, adjusting these three sections while traversing once.

// Three Pointers
// low: points to where the next 0 should go.

// mid: current element we are checking.

// high: points to where the next 2 should go.

// Rules While Traversing
// At every step:

// If nums[mid] == 0:

// Swap nums[low] and nums[mid].

// low++ (expand 0s section) and mid++ (move forward).

// If nums[mid] == 1:

// No swapping needed.

// Just mid++ (because 1s are already supposed to be in the middle).

// If nums[mid] == 2:

// Swap nums[mid] and nums[high].

// high-- (reduce 2s section).

// Important: Do NOT move mid yet, because after swapping you need to check what came from high into mid!


int n =nums.size();
int low =0,mid=0,high=n-1;



while(mid<=high){

    if( nums[mid] == 0){
        swap(nums[mid],nums[high]);
        low++;
        mid++;
    }
    else if(nums[mid]== 1 ){
        mid++;
    }
    else{
        swap(nums[mid],nums[high]);
        high--;
    }
    
}