class Solution {
public:
    //typedef long long ll;
    long long gcdSum(vector<int>& nums) {
        int num=0;
        int n=nums.size();

         
        vector<int>prefixGcd(n);
        for(int i=0;i<n;i++){
          num=max(num,nums[i]);
          prefixGcd[i]=__gcd(num,nums[i]);

        }
         int s=0;
         int  e=n-1;
         long long sum=0;
         sort(prefixGcd.begin(),prefixGcd.end());
         while(s<e){
            sum+=__gcd(prefixGcd[s++],prefixGcd[e--]);
         }
         return sum;
    }
};