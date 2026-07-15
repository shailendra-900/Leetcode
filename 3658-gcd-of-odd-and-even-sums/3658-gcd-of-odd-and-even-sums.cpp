class Solution {
public:
    int gcdOfOddEvenSums(int n) {
         
         int firsteven=2;
         int firstodd=1;
         int lastodd=firstodd+(n-1)*2;
         int lasteven=firsteven+(n-1)*2;;
          
         int oddsum=(n*(firstodd+lastodd))/2;
         int evensum=(n*(firsteven+lasteven))/2;


         return __gcd(oddsum,evensum);
    }
};