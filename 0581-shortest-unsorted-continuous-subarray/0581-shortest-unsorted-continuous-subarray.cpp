class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums; // pahele nums vector temp meh store karlenge
        sort(nums.begin(), nums.end()); // sort kardenge
        int l = 0;                      // left pointer
        int r = 0;                      // right pointer
        
        for (int i = 0; i < nums.size(); i++) {
            if (temp[i] != nums[i]) { // agar equal nhi hua
                l = i;                // matlab waha se unsorted array start hai
                break;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (temp[i] != nums[i]) { // last se bhi compare karenge
                r = i;                // end index ke liye
                break;
            }
        }

        if (l == r) // agar equal hai matlab array sorted hai
            return 0;
        return r - l + 1;
    }
};