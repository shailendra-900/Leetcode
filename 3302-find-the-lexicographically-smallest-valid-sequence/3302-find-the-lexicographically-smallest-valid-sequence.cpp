class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
       int n = word1.size();
       int m = word2.size();

       vector<int> righthandsidematchlength(n,0);

       int righthandmatch=0;
       int i=n-1;
       int j=m-1;

       while(i>=0){
         if(j>=0 && word1[i]==word2[j]){
            righthandmatch++;
            j--;
         }
         righthandsidematchlength[i]=righthandmatch;
         i--;
       }
       vector<int>seq;
       bool changePower=true;
       i=0;
       j=0;

       while(i<n && j<m){
        if(word1[i]==word2[j]){
            seq.push_back(i);
            j++;
        }
         else if(changePower==true && i+1<n && righthandsidematchlength[i+1]>= m-j-1){
            seq.push_back(i);
            j++;
            changePower=false;
        }
        i++;
       }
       return j==m ? seq : vector<int>();
    }
};