class Solution {
public:
       int mod=1e9+7;
       int t[201][201][201];
      int  solve(vector<int>& nums,int i,int first,int second){
        if(i==nums.size()){
            bool notempty= (first!=0&&second!=0);
            bool equal_gcd=(first==second);

            return (notempty && equal_gcd) ? 1 : 0;
        }
        if(t[i][first][second]!=-1){
            return  t[i][first][second];
        }

        int skip=solve(nums,i+1,first,second);
        int take1=solve(nums,i+1,__gcd(first,nums[i]),second);
        int take2=solve(nums,i+1,first,__gcd(second,nums[i]));

        return  t[i][first][second]=(0LL+skip+take1+take2)%mod;
    }
    int subsequencePairCount(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return solve(nums,0,0,0);
    }
};