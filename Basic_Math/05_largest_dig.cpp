class Solution {
public:
    int largestDigit(int n) {
        int max=0;
        int dig;
        while(n>0){
            dig=n%10;
            if (max<dig){
                max=dig;
            }
            n/=10;


        }
        return max;

    }
};

