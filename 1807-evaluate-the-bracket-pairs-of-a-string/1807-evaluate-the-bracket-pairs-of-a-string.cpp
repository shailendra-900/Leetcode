class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string,string>mp;
        
        for(int i=0;i<knowledge.size();i++){
            string key=knowledge[i][0];
            string value=knowledge[i][1];
            mp[key]=value;
        }
        string ans="";
        for(int i=0;i<s.size();i++){
          
          if(s[i]=='('){
            string temp="";
            i++;
            while(i<s.size()&&s[i]!=')'){
                temp+=s[i];
                i++;
            }
            if(mp[temp]!=""){
                ans+=mp[temp];
            }
            else{
                ans+="?";
            }

          }
          else{
            ans+=s[i];
          }

        }
        return ans;
    }
};