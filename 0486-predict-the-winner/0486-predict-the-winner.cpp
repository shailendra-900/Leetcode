class Solution {
public:
       int t[23][23];
      int solve(int i,int j,vector<int>& nums){

        if(i>j) return 0;

        if(i==j) return nums[i];

        if(t[i][j]!=-1) return t[i][j];

        int take_i=nums[i]+min(solve(i+2,j,nums),solve(i+1,j-1,nums));
        int take_j=nums[j]+min(solve(i,j-2,nums),solve(i+1,j-1,nums));

         return t[i][j]=max(take_i,take_j);
           
      }
    bool predictTheWinner(vector<int>& nums) {
        
        int n=nums.size();
        int totalscore=0;
        for(int i=0 ; i<nums.size()  ;  i++){
              totalscore+=nums[i];
        }
        memset(t,-1,sizeof(t));

        int player1_score=solve(0,n-1,nums);
        int player2_score=totalscore - player1_score;

        return player1_score >= player2_score;
    }
};