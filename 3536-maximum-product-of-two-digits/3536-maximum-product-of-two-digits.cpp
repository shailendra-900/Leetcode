class Solution {
public:
    int maxProduct(int n) {
         string str=to_string(n);
        sort(str.begin(),str.end());
        int s=str.size()-1;

        int Fmax=str[s]-'0';
        int Smax=str[s-1]-'0';


        return Fmax*Smax;
    }
};