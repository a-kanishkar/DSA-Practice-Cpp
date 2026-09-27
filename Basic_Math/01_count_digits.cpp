class Solution {
public:
    int countDigit(int n) {
        int dig=0;
        if (n==0) return 1;
        
        while(n>0){
            dig+=1;
            n/=10;
        }
        return dig;


    }
};
