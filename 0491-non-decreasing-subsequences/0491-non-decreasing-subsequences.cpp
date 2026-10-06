class Solution {
public:
    void solve(vector<int> nums, int ind, vector<int>& output,
               set<vector<int>>& ans) {
        if (ind >= nums.size()) {
            if (output.size() >= 2) {
                ans.insert(output);
            }
            return;
        }
        if (output.size() == 0 || nums[ind] >= output.back()) {
            output.push_back(nums[ind]);
            solve(nums, ind + 1, output, ans);
            output.pop_back();
        }
        solve(nums, ind + 1, output, ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> output;
        solve(nums, 0, output, ans);
        return vector(ans.begin(),ans.end());
    }
};