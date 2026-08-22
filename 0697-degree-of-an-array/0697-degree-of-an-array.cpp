class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;  
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;   // map meh num and freq. store hoga
        }
        int maxi = INT_MIN;
        for (auto i : mpp) {
            maxi = max(maxi, i.second);  // max freq. nikal lenge
        }
        int minlen = INT_MAX;

        for (auto j : mpp) {
            if (j.second == maxi) {
                int start = 0;  // starting index max freq. wale element ka
                int end = 0;    // ending index max freq. wale element ka
                for (int i = 0; i < n; i++) {
                    if (nums[i] == j.first) {
                        start = i;
                        break;
                    }
                }
                for (int i = n - 1; i >= 0; i--) {
                    if (nums[i] == j.first) {
                        end = i;
                        break;
                    }
                }
                minlen = min(minlen, end - start + 1);  // mini update hote jayega
            }
        }
        return minlen;
    }
};