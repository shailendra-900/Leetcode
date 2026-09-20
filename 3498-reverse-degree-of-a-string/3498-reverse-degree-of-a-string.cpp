class Solution {
public:
    int reverseDegree(string s) {

        int idx=1;
         int Degree = 0;
        for(int i=0 ; i<s.size() ;i++){
             Degree += (idx*(26-(s[i]-'a')));
             idx++;
        }
        return Degree;
        
    }
};