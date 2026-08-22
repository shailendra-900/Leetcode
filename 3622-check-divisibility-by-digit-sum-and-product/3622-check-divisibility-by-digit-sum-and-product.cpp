class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int temp=n;
      
      while(n){

        int digit=n%10;
        sum+=digit;
        product*=digit;
        n=n/10;
      }

     if(temp%(sum+product)==0) return true;
     return false;
    }
};