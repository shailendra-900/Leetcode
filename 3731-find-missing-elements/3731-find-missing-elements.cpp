class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      vector<int>ans;
      int n=nums.size();
      unordered_map<int,int>mp;

       int smallest=INT_MAX;
       int largest=INT_MIN;
       for(int i=0;i<n;i++){
          smallest=min(smallest,nums[i]);
          largest=max(largest,nums[i]);
       }

      for(int i=0 ;i<n; i++) {
        mp[nums[i]]++;
      }  

      for(int i=smallest ;i<=largest ;i++){
        if(mp[i]==0){
            ans.push_back(i);
        }
      }
      return ans;
    }
};