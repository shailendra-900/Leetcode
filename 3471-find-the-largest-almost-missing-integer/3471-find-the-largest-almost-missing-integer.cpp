class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
       int n=nums.size();
        int ans=INT_MIN;
       if(n==k) {
        for(int i=0;i<nums.size();i++){
           ans= max(ans,nums[i]);
        }
        return ans;
       }
      for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            mp[nums[j]]++;
        }
      }
      
      for(auto &it:mp){
        if(it.second==1){
            ans=max(ans,it.first);
        }
      }
      return (ans==INT_MIN) ? -1 : ans;
    }
};