class Solution {
public:
    int rev(int x){
        int num=0;
        while(x){
            int digit=x%10;
            if(num < INT_MAX / 10 || (num == INT_MAX / 10 && digit <= INT_MAX % 10))
            num=num*10+digit;
            x=x/10;
        }
        return num;
    }
     bool isPalindrome(int x) {
        if(x<0) return false;
       int n=rev(x);
       if(x==n) return true;
       return false; 
    }
};