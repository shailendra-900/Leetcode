class Solution {
public:
    int longestValidParentheses(string s) {
        //from right;
        int n=s.size();
        int len=0;
        int open=0;
        int close=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(close > open) {
                close=0;
                open=0;
            }
            if(close==open){
                len=max(len,open+close);
            }
        }
        //from left
         open=0;
        close=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(close < open) {
                close=0;
                open=0;
            }
            if(close==open){
                len=max(len,open+close);
            }
        }
        return len;
    }
};