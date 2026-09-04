class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for (int j = 0; j <= i; j++) {
                maxi = max(maxi, nums[j]);  /// qsn ke according condn
            }
            for (int k = i; k < n; k++) {
                mini = min(mini, nums[k]);  // qsn ke according
            }
            int score = maxi - mini;
            int index = i;
            if (score <= k) {
                ans = index;  // minimum index chaiyeh isiliye
                break;        // jaise hi 1st mila usko return kardenge
            }
        }
        return ans;
    }
};