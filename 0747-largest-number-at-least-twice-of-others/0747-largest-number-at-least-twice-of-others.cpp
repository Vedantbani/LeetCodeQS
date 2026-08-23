class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        int num = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (num < nums[i]) {
                num = nums[i];
                ind = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if ((ind != i) && (nums[i] * 2) > num)
                return -1;
        }
        return ind;
    }
};