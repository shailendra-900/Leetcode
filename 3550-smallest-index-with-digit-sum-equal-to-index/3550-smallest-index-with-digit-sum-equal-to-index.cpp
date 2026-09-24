class Solution {
public:
    int  digit_sum(int n){
        int sum=0;
        while(n){
            int digit= n%10;
            n=n/10;
            sum+=digit;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
      int n= nums.size();

      for(int i=0 ;i<n;i++){
        if(digit_sum(nums[i])==i){
            return i;
            break;
        }
      }
       return -1;
    }
};