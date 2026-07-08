class Solution {
public:
    typedef long long ll;
    int M=1e9+7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n= s.size();
        vector<int>numlength(n,0);
        vector<ll>number(n,0);
        vector<ll>powTen(n+1,0);
        vector<ll>digitsum(n,0);
        
       powTen[0]=1;
     for(int i =1; i<=n ;i++){
       powTen[i]=(powTen[i-1]*10)%M;
     }
     int sum=0;
     for(int i=0 ; i<n ;i++){
         if(s[i]!='0'){
            sum++;
          numlength[i]=sum;
         } 
         else{
            numlength[i]=sum;
         } 
     }
     number[0]=s[0]-'0';
     for(int i=1;i<n;i++){
        int digit=s[i]-'0';
        if(digit!=0){
          number[i]=((number[i-1]*10)+digit)%M;
        }
         
        else{
            number[i]=number[i-1];
        }
     }
     digitsum[0]=s[0]-'0';
     for(int i=1;i<n;i++){
        int digit=s[i]-'0';
        digitsum[i] = digitsum[i-1]+digit;
     }
     int q=queries.size();
      vector<int>result(q,0);
     for(int i=0;i<q;i++){
        int l=queries[i][0];
        int r=queries[i][1];
        int k=numlength[r]-((l==0) ? 0 :numlength[l-1]);
        ll qsum=digitsum[r]-((l==0) ? 0 :digitsum[l-1]);
        int numbefore=(l==0) ? 0 : number[l-1];
        ll x=(number[r]-(numbefore*powTen[k]%M)+M)%M;

        result[i]=(int)((qsum*x)%M);
     }
     return result;
    }
};