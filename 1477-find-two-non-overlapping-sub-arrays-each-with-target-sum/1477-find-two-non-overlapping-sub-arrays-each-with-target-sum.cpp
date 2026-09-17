class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int i=0;
        int j = 0;

        int n = arr.size();

        vector<int>minBestTillIdx(n,INT_MAX);

        int currSum=0;

        int result=INT_MAX;

        int bestmin=INT_MAX;

        while(j < n) {
            currSum+=arr[j];

            while(i < j && currSum>target) {
                currSum -= arr[i++];
            }

            if(currSum == target) {
             
             int len = j-i+1;

             if(i>0 && minBestTillIdx[i-1]!=INT_MAX) {

                result = min(result,len+minBestTillIdx[i-1]);
             }
             bestmin = min(bestmin,len);

            }
            minBestTillIdx[j] = bestmin;
            j++;
        }
        return result == INT_MAX ? -1 : result;
    }
};