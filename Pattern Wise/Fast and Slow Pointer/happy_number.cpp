
// Time Complexity - O(n)
// space Complexity - O(n)
class Solution
{
public:
    bool isHappy(int n)
    {

        unordered_set<int> stt;
        while (n != 1)
        {
            stt.insert(n);

            int sum = 0;
            while (n > 0)
            {
                int d = n % 10;
                sum += d * d;
                n /= 10;
            }
            n = sum;
            if (stt.count(n))
                return false;
        }
        return true;
    }
};

// using slow and fast pointer



class Solution {
public:
    int calc(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {

        int fast = n;
        int slow = n;

        while (fast != 1) {

            slow = calc(slow);
            fast = calc(calc(fast));

            if (fast == 1)
                return true;
            if (slow == fast)
                return false;
        }
        return true;
    }
};