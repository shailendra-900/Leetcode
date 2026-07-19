class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>lastIndex(26);
        vector<bool>visited(26,false);

        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            lastIndex[idx]=i;
        }
        string result="";
        for(int i=0; i<s.size(); i++){
          
          char ch=s[i];
          int idx=s[i]-'a';

          if(visited[idx]==true){
            continue;
          }
          while(result.length()>0&&result.back()>ch&&lastIndex[result.back()-'a']>i){
             visited[result.back()-'a']=false;
             result.pop_back();
          }
            result.push_back(ch);
            visited[idx]=true;
               
        }
        return result;
    }
};