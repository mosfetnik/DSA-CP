// using array

  int findTheWinner(int n, int k) {

        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }
         
         int i=0;
        while (arr.size() > 1) {

            int idx = (i + k - 1) % arr.size();
            arr.erase(arr.begin()+idx);
            i =idx;
        }
        return arr[0];
    }


    // this question is design for the Recursion

      int findTheIndex(int n, int k) {
        if (n == 1) {
            return 0;
        }
        int idx= findTheIndex(n - 1, k) ;
         idx = (idx + k) % n;
        return idx;
    }


    int findTheWinner(int n, int k) {

        int result_idx = findTheIndex(n, k);
        return result_idx + 1;
    }