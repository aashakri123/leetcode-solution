class Solution {
public:
    int tribonacci(int n) {
      if(n == 0) return 0;
      if(n == 1 || n == 2) return 1;
      int prev = 0;
      int prev2 = 1;
      int curr = 1;
      for(int i = 3; i<= n; i++){
        int next = prev+prev2+curr;
        prev = prev2;
        prev2 = curr;
        curr= next;
      } 
      return curr;
    }
};