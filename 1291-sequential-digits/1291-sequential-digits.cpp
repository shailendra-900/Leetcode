class Solution {
public:  
     bool check(int n){
         int digit=n%10;
         n=n/10;
         while(n){
            int temp=n%10;
            if(temp+1==digit) {
                digit=temp;
            }
            else{
                return false;
            }
            n=n/10;
         }
         return true;
     }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>makenum(9);
        vector<int>tenpow(9);
        long long num=1;
        long long num2=10;
        for(int i=0;i<9;i++){
        makenum[i]=num;
        tenpow[i]=num2;
        num2=num2*10;
        num=num*10+1;
        }
         // find k or digit in number
         int k;
         for(int i=8;i>=0;i--){
             if(low<tenpow[i]) continue;
             else{
                k=i+1;
                break;
             }
         }
         //first number
         int first=0;
         for(int i=0;i<=k;i++){
           first+=makenum[i];
         }
         vector<int>ans;
         while(true){
            if(first<low){
                first=first+makenum[k];
            }
            else if(first>=low&&first<=high){

                if(check(first)){
                    ans.push_back(first);
                  }
                if(first<tenpow[k]){
                     first=first+makenum[k];
                }
                else{
                    int changek=0;
                    k++;
                    for(int i=0;i<=k;i++){
                      changek+=makenum[i];
                    }
                     first=changek;
                    if(check(first)&&first<=high){
                       ans.push_back(first); 
                    }
                    first=first+makenum[k];
                }
            }
            else{
                break;
            }
         }
         return ans;
    }
};