class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<bool> visited(n, 0);
        for (int i = 0; i < n; i++) {  // loop pura vector ke liye chalega
            if (!visited[i]) {
                int cnt = 0;
                int ind = i;
                while (!visited[ind]) {
                    visited[ind]=true;  // visited true kardenge
                    ind = nums[ind];   // next index uss index ka element hoga
                    cnt++;           // cnt++ kardenge
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};