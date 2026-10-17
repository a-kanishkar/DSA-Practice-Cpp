class Solution {
private:
    int GCD(int a, int b){
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
public:
    int LCM(int n1,int n2) {
        int gcd=GCD(n1,n2);
        return (n1/gcd)*n2;
    }
};
