class Solution {
public:
    int getDigitsum(int num){
        int sum=0;
        while(num){
            int digit = num%10;
            num = num/10;
            sum += digit;
        }
        return sum;
    }
      
    int minSwaps(vector<int>& nums) {

    vector<int>aftersorted(nums);

    auto lamda = [&](int nums1,int nums2){
        int Dsum1 = getDigitsum(nums1);
        int Dsum2 = getDigitsum(nums2);

        if(Dsum1 != Dsum2){
            return Dsum1 < Dsum2;
        }
        return nums1 < nums2;
     };

    sort(aftersorted.begin(),aftersorted.end(),lamda);

    unordered_map<int,int>mp;
    int n=nums.size();
     for(int i=0 ;i<n; i++){
        mp[nums[i]]=i;
    }
    int swapcount=0;

    for(int i=0; i<nums.size(); i++){
         

         int currval = nums[i];
         int expectedval = aftersorted[i];

          if(currval == expectedval) continue;

          int idx = mp[expectedval];

          nums[i] = expectedval;
          nums[idx] = currval;

          mp[expectedval] = i;
          mp[currval] = idx;


       swapcount++;
          
    }
    return swapcount;
    }
};