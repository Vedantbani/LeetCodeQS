class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int prod = nums[i] * nums[j];   
                ans += 8 * mpp[prod];   // jitna pair milega uska 
                mpp[prod]++;           // 8 possibilities hoga
            }
        }
        return ans;
    }
};