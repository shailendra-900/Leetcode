class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
      int count1=count(begin(s),end(s),'1');
      vector<int>ans;

      
       int i=0;
       while(i<s.size()){

        if (s[i]=='0'){
            int start=i;
            while(i<s.size()&&s[i]=='0') i++;


            ans.push_back(i-start);
        }
        else{
            i++;
        }
       }
       int maxpairsum=0;
       for (int i=1;i<ans.size();i++){
         maxpairsum=max(maxpairsum,ans[i]+ans[i-1]);
       }

       return maxpairsum+count1;
    }
};