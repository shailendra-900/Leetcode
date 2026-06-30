class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        
        int n = s.length();
         
        int ans = 0 ;
         int j= 0;
        for( int i=0;i<n;i++){
            mp[s[i]]++;
            while(mp['a'] >= 1 && mp['b'] >= 1 && mp['c'] >= 1) {
                  ans+=n-i;
                  mp[s[j]]--;
                  j++;
            }
        }

        
        return ans;
    }
};