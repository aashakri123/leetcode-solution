class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> curr(n+1);
        curr[0]=0;
        for(int i = 1; i<=n; ++i){
            curr[i] = curr[i/2]+i%2;
        }
        return curr;
    }
};