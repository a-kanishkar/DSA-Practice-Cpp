#include <iostream>
using std::cout;

class Solution {
public:
    bool isArmstrong(int n) {
        int pow=0;
        int sum=0;
        int temp=n;
        while (temp>0){
            pow++;
            temp/=10;
        }
        temp=n;
        while (temp>0){
            int digit=temp%10;
            int term=1;
            for (int i=0;i<pow;i++){
                term*=digit;

            }
            sum+=term;
            temp/=10;
            
        }
        return sum==n;


    }
};

int main(){
    Solution sol;

    int n=153;
    

    if (sol.isArmstrong(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
    
}
