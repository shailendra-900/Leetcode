class Solution {
public:
    bool canAliceWin(int n) {

        if(n<10) return false;
        bool Aliceturn = true;
        bool alice=true;
        int remove=10;

        while(n){
          if(Aliceturn){
             n = n - remove;
             if(n<0) return false;
             remove = remove -1;
             Aliceturn = false;
          }
          else{
            n = n - remove;
            if(n<0) return true;
            remove = remove -1;
            Aliceturn = true;
          }

        }
        return !Aliceturn;
    }
};