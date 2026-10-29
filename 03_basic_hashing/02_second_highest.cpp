class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        map <int,int> count;

        for (int i=0; i<n; i++){
            count[nums[i]]++;
        }
        if (count.size()<2){
            return -1;
        }
        int max_freq=0, max_elem=-1;
        int sec_freq=0, sec_elem=-1;
        for (auto pair : count){
            int elem=pair.first;
            int freq=pair.second;
            if (freq>max_freq){
                sec_freq=max_freq;
                sec_elem=max_elem;
                max_freq=freq;
                max_elem=elem;
            }
            else if (freq<max_freq && freq>sec_freq){
                sec_freq=freq;
                sec_elem=elem;
            }
        }

        if (sec_freq==0 || sec_freq==max_freq){
            return -1;
        }
        return sec_elem;
    }
};
