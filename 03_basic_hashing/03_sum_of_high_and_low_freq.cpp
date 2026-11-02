class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums){
        map<int,int> freq;
        for (int i=0; i<(nums.size()); i++){
            freq[nums[i]]++;
        }
        int max_freq=0,min_freq=-1;
        for (auto pair : freq){
           int f=pair.second;
           if (f>max_freq){
            max_freq=f;
           }
           if (min_freq==-1 || f<min_freq){
            min_freq=f;
           }
        }
        return max_freq+min_freq;
    }
};
