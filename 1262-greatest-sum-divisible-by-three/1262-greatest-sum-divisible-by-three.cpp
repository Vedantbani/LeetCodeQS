class Solution {
public:
    int f(int ind, vector<int>& nums, vector<vector<int>>& dp, int remainder) {
        if (ind < 0) {
            if (remainder == 0)
                return 0;
            else
                return INT_MIN;
        }
        if (dp[ind][remainder] != -1)
            return dp[ind][remainder];
        int nottake = f(ind - 1, nums, dp, remainder);
        int take =
            nums[ind] + f(ind - 1, nums, dp, (remainder + nums[ind]) % 3);
        return dp[ind][remainder] = max(take, nottake);
    }
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        int remainder = 0;
        vector<vector<int>> dp(n + 1, vector<int>(3, -1));
        return f(n - 1, nums, dp, remainder);
    }
};

// Using Reccursion

// class Solution {
// public:
//     int f(int ind, vector<int> nums, int sum) {
//         int n = nums.size();
//         if (ind < 0) {
//             if (sum % 3 == 0)
//                 return sum;
//             else
//                 return INT_MIN;
//         }
//         int nottake = f(ind - 1, nums, sum);
//         int take = f(ind - 1, nums, sum + nums[ind]);
//         return max(take, nottake);
//     }
//     int maxSumDivThree(vector<int>& nums) {
//         int n = nums.size();
//         int sum = 0;
//         return f(n - 1, nums, sum);
//     }
// };