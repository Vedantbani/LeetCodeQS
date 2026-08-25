class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxLen = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            unordered_set<int> evens;  // distinct even no. store karega
            unordered_set<int> odds;   // distinct odd no. store karega

            // Expand the ending point of the subarray
            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0) {
                    evens.insert(nums[j]);
                } else {
                    odds.insert(nums[j]);
                }

                // If the number of distinct even and odd numbers match
                if (evens.size() == odds.size()) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
};