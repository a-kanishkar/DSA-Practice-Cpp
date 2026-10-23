class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        map <int,int> count;

        for (int i=0; i<n; i++){
            count[nums[i]]++;
        }

        int max_element=0, max_value=0;
        for (auto pair : count){
            if (pair.second>max_value){
                max_element=pair.first;
                max_value=pair.second;
            }
        }

        return max_element;
    }
};
