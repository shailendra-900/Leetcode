class Solution {
public:
    int m,n;
    bool check(vector<vector<int>>& grid, int health, int r, int c,
           vector<vector<bool>>& visited,
           vector<vector<vector<int>>>& dp) {

    if(r<0 || r>=m || c<0 || c>=n)
        return false;

    if(visited[r][c])
        return false;

    if(grid[r][c]==1)
        health--;

    if(health<1)
        return false;

    if(r==m-1 && c==n-1)
        return true;

    if(dp[r][c][health]!=-1)
        return dp[r][c][health];

    visited[r][c]=true;

    bool ans =
        check(grid,health,r+1,c,visited,dp) ||
        check(grid,health,r-1,c,visited,dp) ||
        check(grid,health,r,c+1,visited,dp) ||
        check(grid,health,r,c-1,visited,dp);

    visited[r][c]=false;

    return dp[r][c][health]=ans;

}
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        m=grid.size();
        n=grid[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n, vector<int>(health + 1, -1)));
         if(check(grid,health,0,0,visited,dp)){
            return true;
        }
        return false;
    }
};