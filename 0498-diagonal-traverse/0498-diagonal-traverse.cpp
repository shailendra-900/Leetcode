class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        int i=0;
        int j=0;
        bool direction = true;

        vector<int>ans;

        while(true){

            ans.push_back(mat[i][j]);

            if(i == m-1 && j==n-1) break;

            if(direction){

                if(i-1 >= 0 && j+1 < n){
                   i = i-1;
                    j = j+1;
                }
                 else{

                    if(j+1 == n){
                        direction = false;
                        i = i+1;
                        j = j;
                    }
                    else{
                        direction = false;
                        i = i;
                        j = j+1;
                    }
                         
                 }
            }
            else{
                if(i+1 < m && j-1 >=0) {
                    i = i+1;
                    j = j-1;
                }
                else{

                    if(i+1==m){
                        direction =  true;
                        i = i;
                        j = j+1;
                    }
                    else{
                       direction =  true;
                        i = i+1;
                        j = j;
                    }
                     
                }
            }


        }
        return ans;
    }
};