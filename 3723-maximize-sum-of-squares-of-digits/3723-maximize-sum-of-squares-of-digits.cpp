class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
    int i=1;
    string ans;

    while(i<=num){

        if(sum>=9){
            ans+='9';
            sum-=9;

        }
        else {
            ans+=to_string(sum);
            sum=0;
        }
       
      i++;
    }
    if(sum!=0){
        return "";
    }

       return ans;
        
    }
};