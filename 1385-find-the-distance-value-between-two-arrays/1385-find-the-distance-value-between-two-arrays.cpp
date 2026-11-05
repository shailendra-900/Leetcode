class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        int count =0 ;
        for(auto &num1: arr1){
            for(int i=0;i<arr2.size();i++){
                int num2 = arr2[i];
                if(abs(num1-num2) <= d){
                    break;
                }
                if(i==arr2.size()-1){
                    count++;
                }
            }

        }
        return count;
    }
};