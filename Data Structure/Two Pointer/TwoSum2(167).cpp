// brute force
 public int[] twoSum(int[] numbers, int target) {
        int len = numbers.length;
        for(int i = 0; i < len-1; i++){
            int find = target - numbers[i];
            for(int j = i + 1; j < len; j++){
                if(numbers[j] == find){
                    return new int[]{i + 1, j + 1};
                }else if(numbers[j] > find)
                    break;
            }
        }
        return null;
    }



    // using binary search
      public int[] twoSum(int[] numbers, int target) {
        int len = numbers.length;
        int low = 0, high = len - 1;
        int sum = numbers[low] + numbers[high];
        while(sum != target){
            if(sum < target) low++;
            else high--;
            sum = numbers[low] + numbers[high];
        }
        return new int[]{low + 1, high + 1};
    }


    // using two pointer

      public int[] twoSum(int[] numbers, int target) {
      int slow = 0, fast = numbers.length - 1;
      while(slow < fast){
          int sum = numbers[slow] + numbers[fast];
          if(sum == target) return new int[]{slow + 1, fast + 1};
          else if(sum < target) slow++;
          else fast--;
      }
      return new int[]{-1, -1};
  }