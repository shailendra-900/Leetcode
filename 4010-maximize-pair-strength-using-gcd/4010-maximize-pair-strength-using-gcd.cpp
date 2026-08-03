class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
         int n=nums.size();

          long long maxstrength=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

                long long  g=__gcd(nums[i],nums[j]);
                long long gcdsqure=g*g;
                long long multiple=1LL*nums[i]*nums[j];

                long long strength = multiple / gcdsqure;

                 maxstrength=max(maxstrength,strength);

                
                
            }
        }
        return maxstrength;
        
    }
};