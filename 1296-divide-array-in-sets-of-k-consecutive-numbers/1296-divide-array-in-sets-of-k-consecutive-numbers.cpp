class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % k != 0)
            return false;
        if (k == 1)
            return true;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mpp;  // map meh store hoga
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        for (int i = 0; i < n; i++) {
            int count = 0;
            int val = nums[i];
            while (count < k && mpp[val]) {
                count++;   // k wala condition check hoga
                mpp[val]--; 
                val++;    
            }
            if (count > 0 && count != k)
                    return false;
        }
        return true;
    }
};