class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        
        int n = nums.size();

        for(int i = 0; i<n ; i++) {
            if(nums[i] < mini) {
                mini = nums[i];
            }
        } 
        int  minioperation = 0;

        for(int i = 0; i<n ; i++) {
            minioperation += (nums[i] - mini);
        } 
        return  minioperation;
    }
};