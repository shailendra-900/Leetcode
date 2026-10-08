class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        int close=0;
        int n=s.size();

       bool flag=false;
       string str="";
       string result="";

        for(int i=0 ; i<n ; i++){


            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }


            if(open!=close){
                if(flag) {
             str+=s[i];
         }
         flag=true;
    }
    else{
        result+=str;
        open=0;
        close=0;
        str="";
        flag=false;
    }
         
     }
     return result;

    }
};