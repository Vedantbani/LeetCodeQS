class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (n % (i + 1) == 0)      /// condition given in qsn
                ans += (nums[i] * nums[i]); // agar true hua toh add karte jayenge
        }
        return ans;
    }
};