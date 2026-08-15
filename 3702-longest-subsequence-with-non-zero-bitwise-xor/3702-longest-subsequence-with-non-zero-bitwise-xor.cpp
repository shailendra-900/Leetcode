class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
    //    int i=0;
    //    int j=0;
    //     int ans=0;
    //     int max_len=0;
    //    int n=nums.size();
    //     bool flag=false;
    //    while(j<n&&i<n){

    //     if(nums[j]==0) {
    //         j++ ;
    //         continue;
    //     }
    //     ans=ans^nums[j];

    //     while(ans==0){
    //         flag=true;
    //         ans=ans^nums[i];
    //         i++;
            
    //     }
    //     j++;
    //     max_len=max(max_len,j-i+1);
    //    } 
    //    return max_len;

    int ans=0;
      int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count++;
        }  
        ans=ans^nums[i];
    }

    if(count==nums.size()) return 0;
     
     if(ans==0) return nums.size()-1;
     return nums.size();


    // int ans=0;
    // for(int i=0;i<nums.size();i++){

    // }
    }
};