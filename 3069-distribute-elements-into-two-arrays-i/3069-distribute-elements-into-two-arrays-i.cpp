class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();

         vector<int>ans(n);

         int s=0;
         int e=n-1;
         int i=2;
         ans[s]=nums[0];
         ans[e]=nums[1];
         
        while(i<n) {
           if(ans[s]>ans[e]){
            s++;
            ans[s]=nums[i];
            
           }
           else{
            e--;
            ans[e]=nums[i];

           }
           i++;
                
    }
    int start=e;
    int end=n-1;

    while(start<=end){
        swap(ans[start++],ans[end--]);
    }
    
        return ans;
    }
};