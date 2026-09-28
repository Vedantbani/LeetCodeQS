class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] <= nums[i + 1]) {
                cnt1++;
            }
            if (nums[i] >= nums[i + 1]) {
                cnt2++;
            }
        }
        if (cnt1 == n - 1 || cnt2 == n - 1)
            return true;
        return false;
    }
};