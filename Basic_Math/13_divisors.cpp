class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> div;
        for (int i=1; i<=(n/2); i++){
            if ((n%i)==0){
                div.push_back(i);
            }
        }
        div.push_back(n);
        return div;
    }
};
