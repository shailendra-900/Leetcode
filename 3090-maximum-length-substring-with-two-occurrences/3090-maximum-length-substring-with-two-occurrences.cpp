class Solution {
public:
    int maximumLengthSubstring(string s) {
      int i=0;
      int j=0;
      int ans=0;
      int hash[26]={0};
      int n=s.size();
      while(j<n) {
        int idx=s[j]-'a';
        hash[idx]++;

        while(hash[idx]>2){
            hash[s[i]-'a']--;
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
      } 
      return ans;
    }
};