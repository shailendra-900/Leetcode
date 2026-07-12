class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return arr;
        unordered_map<int,int>mp;
        int n=arr.size();
        vector<int>ans(n);
        for(int i=0;i<arr.size();i++){
            ans[i]=arr[i];
        }
        int count=1;
         
        sort(arr.begin(),arr.end());
        mp[arr[0]]=1;
        
        for(int i = 0; i<n-1; i++){
          if(arr[i]==arr[i+1]) mp[arr[i+1]]=count;
          else mp[arr[i+1]]=++count;
        }
        for(int i=0; i<arr.size(); i++){
            ans[i]=mp[ans[i]];
        }
        return ans;
    }
};