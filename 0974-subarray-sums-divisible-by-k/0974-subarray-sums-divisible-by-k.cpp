class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixsum = 0;
        int cnt = 0;
        map<int, int> mpp;
        mpp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            prefixsum += nums[i];
            int rem = prefixsum % k;
            if (rem < 0) {
                rem += k;
            }
            cnt += mpp[rem];
            mpp[rem]++;
        }
        return cnt;
    }
};

// BruteForce method(N^2 complexity)

// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         int cnt = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             int sum = 0;
//             for (int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 if (sum % k == 0)
//                     cnt++;
//             }
//         }
//         return cnt;
//     }
// };