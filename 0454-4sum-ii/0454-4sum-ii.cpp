class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4) {
        int n = nums1.size();
        int cnt = 0;
        unordered_map<int, int> mpp;   // stores sum and freq. of that same sum
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum = nums1[i] + nums2[j];  // pahele do arrays ke element ka sum 
                mpp[sum]++;        // store karenege
            }
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum = nums3[i] + nums4[j];
                if (mpp.count(-sum))  // agar joh upar sum store kiye hai
                    cnt += mpp[-sum];  // uska -ve bhi hoga map meh toh uska freq.
                                   // store karlenge 
            }
        }

        return cnt;
    }
};