class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans = 0;    // total kitna increament karna hai woh batayega
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {     // target wala hamesha piche
                int target = nums[i - 1] + 1;   // wale se 1 bada hoga
                ans += target - nums[i];    //diff ko ans meh add karte jayenge 
                nums[i] = target;    // current element ko tatrget se replace kardenge
            }
        }
        return ans;
    }
};