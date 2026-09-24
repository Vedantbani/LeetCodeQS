class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) { // i-cnt= effective index
            if ((i - cnt) % 2 == 0 && nums[i] == nums[i + 1]) {
                cnt++; // agar element remove hoga toh cnt++ hoga
            }
        } // final size = n-cnt
        if ((n - cnt) % 2 != 0) // final size agar odd hua toh 1 aur remove karenge
            cnt++;
        return cnt;
    }
};