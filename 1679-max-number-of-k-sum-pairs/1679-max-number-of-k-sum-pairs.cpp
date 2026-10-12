class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int cnt = 0;
        int s = 0;    // start pointer
        int e = nums.size() - 1;  // end pointer
        sort(nums.begin(),nums.end());
        while (s < e) {
            if (nums[s] + nums[e] == k) {
                cnt++;   // cnt++ hote jayega jaise hi pair milega
                s++;
                e--;
            } else if (nums[s] + nums[e] > k) {
                e--;
            } else
                s++;
        }
        return cnt;
    }
};