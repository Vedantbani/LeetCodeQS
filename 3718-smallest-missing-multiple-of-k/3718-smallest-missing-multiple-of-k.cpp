class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int num=0;
        for(int i=1; ;i++){
            num=k*i;
            if(mpp.find(num) == mpp.end())return num;

        }
        return num;
    }
};