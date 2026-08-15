class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            temp = temp ^ nums[i];
            if (nums[i] != 0)
                flag = 1;
        }
        if (flag == 0)  // agar sab element 0 honge toh 
            return 0;    /// ans 0 hoga

        else if (temp != 0)  // agar temp not equal to 0 hai matlab
            return n;        // vector ki length hi ans hoga

        return n - 1;     // nhi toh length - 1
    }
};