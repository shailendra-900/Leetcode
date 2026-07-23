class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       int n=nums.size();

    
        int power=0;

        int ans;
        if(n==2||n==1) return n;
         
        for(int i=0;i<32;i++){
            int power=pow(2,i);
            if(power>n){
               ans=pow(2,i);
              break;
            }
            else if(power==n){
               ans=pow(2,i+1);
               break;
            }
             
        }
        return ans;
    }
};