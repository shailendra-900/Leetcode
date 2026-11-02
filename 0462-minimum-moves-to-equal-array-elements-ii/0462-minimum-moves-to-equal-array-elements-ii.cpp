class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int idx = n/2;
        int element = nums[idx];
        int move =0;
        for( int i = 0 ; i < n ;i++) {
            if(i<idx) {
              move += (element-nums[i]);
            }
             else{
                 move += (nums[i]-element);
            }
        }
        return move;
    }
};