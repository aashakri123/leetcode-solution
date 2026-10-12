class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
      int m = grid.size();
      int n = grid[0].size();
      vector<int>curr(n,0);
      curr[0] = grid[0][0];
      for(int j = 1; j<n; j++){
        curr[j] = curr[j-1]+grid[0][j];
      }
      for(int i=1; i<m; i++){
           curr[0] += grid[i][0];
            for(int j = 1; j<n; j++){
                curr[j] = min(curr[j-1], curr[j]) + grid[i][j];
            }
        } 
        return curr[n-1];
    }
};