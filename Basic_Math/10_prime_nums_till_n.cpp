/*Core Idea: Instead of checking if every number is prime by trying to divide it, we do the reverse:
start with the smallest prime (2) and cross out (mark as false) all of its multiples, 
because any multiple of a number cannot be prime. Then move to the next unmarked number and repeat.*/

class Solution {
public:
    int primeUptoN(int n) {
        if (n<=1) return 0;
        vector<bool> isprime(n+1,true);
        isprime[0]=isprime[1]=false;
        
        for(int i=2; i*i<=n; i++){
            if (isprime[i]){
                for (int j=i*i; j<=n; j+=i){
                    isprime[j]=false; 
                }
            }
        }
        
        int count=0;
        for (int i=1; i<=n; i++){
            if (isprime[i]) count++;
        }
        return count;
        } 
};

