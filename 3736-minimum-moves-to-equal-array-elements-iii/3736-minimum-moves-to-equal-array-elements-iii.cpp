class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;

        for ( int i=0 ;i<nums.size(); i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }
        int move = 0;
        for(int i=0; i<nums.size() ;i++){
            move += maxi-nums[i];
        }
        return move;
    }
};