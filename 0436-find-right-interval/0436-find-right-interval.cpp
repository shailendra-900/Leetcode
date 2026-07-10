class Solution {
public:
    int n;
    int m;
    int helper(vector<vector<int>>&temp,int target){
        int s=0;
        int e=m-1;
        int result=-1;
        while(s<=e){
           int mid=s+(e-s)/2;
           if(temp[mid][0]==target){
            return temp[mid][1];
           }
           else if(temp[mid][0]>target){
             result=temp[mid][1];
             e=mid-1;
           }
           else{
            s=mid+1;
           }
        }
        return (result==-1) ? -1 : result;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
     n=intervals[0].size();
     m=intervals.size();
     vector<vector<int>> temp(m, vector<int>(n));
     vector<int>ans(m);
     for(int i=0;i<m;i++)  {
        temp[i][0]=intervals[i][0];
        temp[i][1]=i;
     }
         
     sort(temp.begin(),temp.end());

     for(int i=0;i<m;i++){
        int target=intervals[i][1];
        ans[i]=helper(temp,target);
     }
     return ans;
    }
};