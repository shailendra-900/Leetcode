class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
      }  

      for(int i=k; ;i+=k){
        if(mp[i]==0) {
            return i;
            break;
        }
      }
      return 0;
    }
};