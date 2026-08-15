class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            int zero = 0;
            int one = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] >> i & 1)   // agar bit 1 hai toh one count badhega
                    one++;
                else       // nhi toh zero bit ka count badhega
                    zero++;
            }
            ans += one * zero;   // total diff. bits = one*zero (bit count)
        }
        return ans;
    }
};

// // BruteForce method(using XOR)
// class Solution {
// public:
//     int totalHammingDistance(vector<int>& nums) {
//         int ans = 0;
//         for (int i = 0; i < nums.size() - 1; i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 int xorr = nums[i] ^ nums[j];
//                 ans += __builtin_popcount(xorr);
//             }
//         }
//         return ans;
//     }
// };