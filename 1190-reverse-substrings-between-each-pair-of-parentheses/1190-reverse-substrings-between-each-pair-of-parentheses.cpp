class Solution {
public:
    //  void reverse (string &s,int start,int end){

    //     while(start<=end){
    //         swap(s[start],s[end]);
    //         start++;
    //         end--;
    //     }

    //  }
    string reverseParentheses(string s) {
    stack<int>st;
    string str="";
    
    for(int i=0;i<s.size();i++){

        if(s[i]=='('){
            st.push(i);
        }
        if(s[i]==')'){
            int end=i-1;
            int start=st.top()+1;
            st.pop();
            while(start<=end){
                swap(s[start++],s[end--]);
            }
            // reverse(s,start,end);
        }

    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='('&&s[i]!=')'){
            str+=s[i];
        }
    }
    return str;
        
    }
};