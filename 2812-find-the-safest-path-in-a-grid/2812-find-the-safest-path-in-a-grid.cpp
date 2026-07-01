class Solution {
public:
    int n;
    vector<vector<int>>directions{{1,0},{-1,0},{0,-1},{0,1}};

    bool check(vector<vector<int>>& distNearestThief, int sf) {

    if (distNearestThief[0][0] < sf)
        return false;

    queue<pair<int,int>> que;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    que.push({0,0});
    visited[0][0] = true;

    while (!que.empty()) {

        auto [i, j] = que.front();
        que.pop();

        if (i == n-1 && j == n-1)
            return true;

        for (auto &dir : directions) {

            int ni = i + dir[0];
            int nj = j + dir[1];

            if (ni < 0 || ni >= n || nj < 0 || nj >= n ||
                visited[ni][nj])
                continue;

            if (distNearestThief[ni][nj] < sf)
                continue;

            visited[ni][nj] = true;
            que.push({ni, nj});
        }
    }

    return false;
}

    int maximumSafenessFactor(vector<vector<int>>& grid) {
       n=grid.size();

        //step-1 precalculation of distance -for each cell
        vector<vector<int>>distNearestThief(n,vector<int>(n,-1));
        queue<pair<int,int>>que; 
        vector<vector<bool>>visited(n,vector<bool>(n,false));

        //push all cells in queue where thieves are present
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    que.push({i,j});
                    visited[i][j]=true;
                }
            }
        }
        int level=0;
        while(!que.empty()){
            int size =que.size();

            while(size--){
                int curr_i=que.front().first;
                int curr_j=que.front().second;
                que.pop();
               distNearestThief[curr_i][curr_j] = level;
                for(vector<int>&dir:directions){
                    int new_i=curr_i+dir[0];
                    int new_j=curr_j+dir[1];


                    if(new_i<0||new_i>=n||new_j<0||new_j>=n||visited[new_i][new_j]){
                        continue;
                    }

                    que.push({new_i,new_j} )  ;
                    visited[new_i][new_j]=true;         
               }
            }
            level++;
        }
        //step-2 apply binary search on sf
        int l=0;
        int r=400;
        int result=0;

        while(l<=r){
            int mid_sf=l+(r-l)/2;

            if(check(distNearestThief,mid_sf)){
                result=mid_sf;
                l=mid_sf+1;
            }
            else{
                r=mid_sf-1;
            }
        } 
        return result;
    }
};