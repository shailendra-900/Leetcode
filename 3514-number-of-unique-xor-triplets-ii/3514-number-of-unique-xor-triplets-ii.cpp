class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       unordered_set<int>s1;

       for(int i= 0; i<nums.size(); i++) {
        for(int j=i ;j<nums.size(); j++){
            s1.insert(nums[i]^nums[j]);
        }
       }
       unordered_set<int>s2;
       for(auto& pairxor:s1){
        for(int &num:nums){
         s2.insert(pairxor^num);
        }
       }
       return s2.size();
    }
};