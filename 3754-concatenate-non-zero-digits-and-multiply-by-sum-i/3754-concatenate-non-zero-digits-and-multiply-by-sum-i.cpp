class Solution {
public:
   int  reversenumber(long long &x){
    long long ans=0;
    while(x){
        int digit=x%10;
        x=x/10;
       ans=ans*10+digit;
    }
 return ans;
   }
    long long sumAndMultiply(int n) {
        
       long long  sum=0;
       long long x=0;
       while(n){
        int digit=n%10;
        sum+=digit;
       if(digit!=0)  {
         x=x*10+digit;
       }
        n=n/10;
        } 
        x=reversenumber(x);
      return sum*x;

    }
};