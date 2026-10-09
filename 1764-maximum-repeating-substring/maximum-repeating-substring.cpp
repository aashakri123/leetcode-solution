class Solution {
public:
    int maxRepeating(string sequence, string word) {
       int n= sequence.size();
       int m = word.size();
       vector<int>curr(n,0);
       int prev = 0;
       for(int i = m-1;i<n; i++){
         if(sequence.substr(i-m+1,m)==word){
            curr[i] = 1;
            if(i>=m){
                curr[i] += curr[i-m];
            }
            prev = max(prev, curr[i]);
         }
       }
       return prev;
    }
};