class Solution {
public:
    int minOperations(string s) {
     int n=s.size();

        string str=s;
        

        int min_opretion=INT_MAX;

        for(int i=0;i<n;i++){
            int cost=0;

            for(int j=0;j<n/2;j++){

                int index1=(i+j)%n;
                int index2 = (n-1-j+i)%n;

                int first=str[index1]-'a';
                int second=str[index2]-'a';

                int dif1=(first-second+26)%26;
                int dif2=(second-first+26)%26;
                cost+=min(dif1,dif2);
            }
            min_opretion=min(min_opretion,i+cost);
        }

    
    return min_opretion;
        
    }
};