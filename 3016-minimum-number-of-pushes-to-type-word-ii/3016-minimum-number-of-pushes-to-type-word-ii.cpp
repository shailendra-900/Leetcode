class Solution {
public:
    int minimumPushes(string word) {
       vector<int>hash(26,0);

       for(int i=0;i<word.size();i++){
        hash[word[i]-'a']++;
       } 
       //find number of distinct ch
       int cost=0;
       int count=1;

       sort(hash.begin(),hash.end());

       for(int i=25;i>=0 ;i--){
         if(hash[i]==0) break;

       if(count<=8){
             cost+=hash[i]*1;
             count++;
        }
        else if(count>8&&count<=16){
           cost+=hash[i]*2;
             count++;
        }
        else if(count>16&&count<=24){
             cost+=hash[i]*3;
             count++;
        }
        else{
          cost+=hash[i]*4;
             count++;
        }
       }
      return cost;
    }
};