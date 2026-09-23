class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();

        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=-1;
        for(int i=0 ; i<n ;i++){

            sum+=nums[i];
            mp[sum]=i;

        }

        if(sum<x) return -1;
        int remaining_sum = sum-x;

        int longest_sub = INT_MIN;
        sum=0;

        for(int i=0;i<n;i++){
          sum += nums[i];

          int findsum = sum-remaining_sum;

          if(mp.find(findsum)!=mp.end()){
            int idx = mp[findsum];

            longest_sub=max(longest_sub,i-idx);
          }
        }
        return longest_sub == INT_MIN ? -1 : n-longest_sub;
    }
};