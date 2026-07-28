class Solution {
public:
    string smallestPalindrome(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
         string str1="";
         string str2="";
         string middle="";
        for(int i=0;i<26;i++){

            if(hash[i]==0) continue;
            if(hash[i]%2==0){
                int len=hash[i]/2;

                for(int j=1;j<=len;j++){
                    str1+=i+'a';
                    str2+=(i+'a');
                }

            }
            else{
                 middle+=i+'a';
                 int len=hash[i]/2;
                 for(int j=1;j<=len;j++){
                    str1+=i+'a';
                    str2+=(i+'a');
                 }
            }
        }
        reverse(str2.begin(),str2.end());
        return str1+middle+str2;
    }
};