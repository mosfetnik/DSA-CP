 bool find132pattern(vector<int>& nums) {

        int n = nums.size();
        stack<int> st;
        int num3 = INT_MIN;


            for (int i = n - 1; i >= 0; i--) {
            if (num3 > nums[i]) {
                return true;
            }

            while (!st.empty() && nums[i] > st.top()) {
                num3 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }