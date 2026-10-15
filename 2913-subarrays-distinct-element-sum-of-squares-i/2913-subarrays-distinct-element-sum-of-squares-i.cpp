class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            unordered_set<int> distinct;   // distinct element store hoga isme
            for (int j = i; j < n; j++) {
                distinct.insert(nums[j]);
                int num = distinct.size();
                ans += num * num;     /// ans += num^2 hote jayega
            }
        }
        return ans;
    }
};