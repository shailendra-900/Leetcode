class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int idx1;
        int idx2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(nums[i]>maxi){
                maxi=nums[i];
                idx1=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                idx2=i;
            }
        }
        if(idx1<idx2){
            return min({(idx1+1+n-idx2),(idx2+1),(n-idx1)});
        }
        return min({(idx2+1+n-idx1),(idx1+1),(n-idx2)});
    }
};