// Given two integer arrays pushed and popped each with distinct values, return true if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.


bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;
        int m = pushed.size();
        int i = 0;
        int j = 0;

        while (i < m && j < m) {

            st.push(pushed[i]);

            while (!st.empty() && j < m && st.top() == popped[j]) {
                st.pop();
                j++;
            }

            i++;
        }
      return st.empty();
    }