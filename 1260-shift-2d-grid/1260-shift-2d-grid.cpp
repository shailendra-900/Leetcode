class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int m=grid.size();
       int n=grid[0].size();
       vector<vector<int>>ans(n,vector<int>(m));

       if(k==0) return grid;

       while(k--){
          

          for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(i==m-1&&j==n-1){
                ans[0][0]=grid[m-1][n-1];
            }
            else if(j==n-1){
                ans[i+1][0]=grid[i][n-1];

            }
            else{
                ans[i][j+1]=grid[i][j];
            }
        }
       }
       grid=ans;

        
       }
       return ans;

    }
};