class Solution {
public:
    int countOddDigit(int n) {
        int odig=0;
        int temp;
        while(n>0){
            temp=n%10;
            if((temp%2)!=0){
                odig++;
            }
            n/=10;
        }
        return odig;

    }
};
