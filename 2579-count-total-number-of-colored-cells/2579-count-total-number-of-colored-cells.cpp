class Solution {
public:
    long long coloredCells(int n) {
       long long ans;
       long long temp=1;
       if(n==1) return 1;
    for(long long i=2;i<=n;i++){
        long long forward=i*i;
        
        ans=temp+forward;

         temp=forward;
    }
    return ans;
    }
};