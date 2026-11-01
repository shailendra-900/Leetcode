class Solution {
public:
    int n,m;
    int count=0;
    int MOD = 1e9+7;
    int solve(vector<vector<int>>& grid,int i,int j,int  camefrom,vector<vector<array<int,2>>> &t){
      if(i>=m || j>= n ){
        return 0;
      }
      if(i==m-1 && j==n-1){
        return 1;
      }

      if(t[i][j][camefrom] != -1){
        return t[i][j][camefrom];
      }
      if(grid[i][j]==1){
        if(camefrom == 0){
             return  t[i][j][camefrom] = solve(grid,i+1,j,1,t);
        }
        else{
           return   t[i][j][camefrom] = solve(grid,i,j+1,0,t);
        }
    }
         int totalpath = 0;
        totalpath = (totalpath+solve(grid,i,j+1,0,t)) % MOD;
        totalpath = (totalpath+solve(grid,i+1,j,1,t)) % MOD;

        return  t[i][j][camefrom] = totalpath;
        
}
    int uniquePaths(vector<vector<int>>& grid) {
       m=grid.size();
       n=grid[0].size();
       vector<vector<array<int,2>>> t(m+1 , vector<array<int ,2 >>(n ,{-1,-1}));

     return  solve(grid,0,0,0,t); 
    }
};