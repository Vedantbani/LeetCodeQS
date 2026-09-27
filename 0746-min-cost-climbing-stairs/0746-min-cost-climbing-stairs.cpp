class Solution {
public:  // i = starting index
    int calculate(int i, vector<int>& cost, vector<int>& dp) {
        int n = cost.size();
        if (i >= n)   // n-1 tak index hota hai isliye agar n>= 
            return 0;  // hua toh 0 return karega
        if (dp[i] != -1)
            return dp[i];    // dono meh se joh minimum hoga woh wala lenge
        return dp[i] = cost[i] + min(calculate(i + 1, cost, dp),  // 1 step jump
                                     calculate(i + 2, cost, dp)); // 2 step jump
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1);  // dp initilaize karenge

        // dono meh se joh bhi minimum hoga woh wala return karenge
        return min(calculate(0, cost, dp), calculate(1, cost, dp));
    }
};