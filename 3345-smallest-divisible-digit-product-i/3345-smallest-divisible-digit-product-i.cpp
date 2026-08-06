class Solution {
public: 
     bool divisible(int i,int t){
        int product=1;
        while(i){
            int digit=i%10;
            product=product*digit;
            i=i/10;
        }
        if(product%t==0) return true;
        return false;

     }
    int smallestNumber(int n, int t) {
        
        for(int i=n;i<=100;i++){
            if(divisible(i,t)){
                return i;
            }
        }
        return 0;
    }
};