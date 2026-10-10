class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        int sum = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int need = sum - target;     // isko apne ko map meh dhundhna hai
            if (mpp.find(need) != mpp.end()) {   // agar map meh jitna chaiyeh woh hai
                ans++;          // toh ans++ hojayega
                mpp.clear();    // phir pura map clear karke  mpp[0]=1 kardenge
                sum = 0;       /// sum=0 kardenge
                mpp[0] = 1;
            } else {
                mpp[sum]++;   // nhi toh sum ko daalte jayenge map meh
            }
        }
        return ans;
    }
};