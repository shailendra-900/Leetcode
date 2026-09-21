class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long>result(k,0);
        vector<long long>prevCount(k,0);

        for(int i=0;i<nums.size();i++){

            vector<long long>currCount(k,0);

            int currentElementRemainder = nums[i]%k;


              currCount[currentElementRemainder]++;
             

            for(int oldiRem=0;oldiRem<k;oldiRem++){
                int newRemainder = ((long long)oldiRem * nums[i]%k)%k;

                currCount[newRemainder] += prevCount[oldiRem];
            }
            prevCount = move(currCount);

            for(int x=0;x<k;x++){
            result[x] += prevCount[x];
        }
        }

         
        return result;
    }
};