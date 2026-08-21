class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i]; // first k element sum
        }
        double maxsum = sum;     // maxi ko isse initialize kardenge
        for (int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i]; // ek element add hoga
            maxsum = max(maxsum, sum);      // toh ek element minus hoga start se
        }                                     // sliding window concept
        return maxsum / k;
    }
};