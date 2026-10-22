class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& nums,int n, vector<int>&temp,int start){
        if(start==n) {
            ans.push_back(temp);
              return;
        }
        
        //not take
        solve(nums,n,temp,start+1);
        //take
         temp.push_back(nums[start]);
         solve(nums,n,temp,start+1);
         temp.pop_back();
}

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;

        solve(nums,n,temp,0);

        return ans;
        
    }
};