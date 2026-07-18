class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=-1;
        int mini=1001;
        for(int i=0;i<nums.size();i++){
             maxi=max(maxi,nums[i]);
             mini=min(mini,nums[i]);
        }
        return __gcd(maxi,mini);
    }
};