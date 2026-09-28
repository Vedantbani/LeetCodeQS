class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increasing = true;  // initially lenge ki increase karra hai
        bool decreasing = true;  // initially lenge ki decrease karra hai
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {  // agar aage wala bada hogaya
                decreasing = false;    // matlab decreasing wala case false
            }
            if (nums[i] > nums[i + 1]) {  // agar aage wala chota hogaya 
                increasing = false;   // matlab increasing wala case false
            }
        }
        if (!increasing && !decreasing)  // agar increase decrease dono nhi karra hai
            return false;          // matlab false hoga
        return true;
    }
};

// 2nd solution

// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//         int cnt1 = 0, cnt2 = 0;
//         int n = nums.size();
//         for (int i = 0; i < nums.size() - 1; i++) {
//             if (nums[i] <= nums[i + 1]) {
//                 cnt1++;
//             }
//             if (nums[i] >= nums[i + 1]) {
//                 cnt2++;
//             }
//         }
//         if (cnt1 == n - 1 || cnt2 == n - 1)
//             return true;
//         return false;
//     }
// };