// Two Pointers approach
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_map<char, int> mpp;
        int ans = INT_MIN;
        while (r < s.size()) {
            mpp[s[r]]++;
            while (mpp[s[r]] > 2) {
                mpp[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};

// // BruteForce Approach

// class Solution {
// public:
//     int maximumLengthSubstring(string s) {
//         int ans = INT_MIN;
//         for (int i = 0; i < s.size(); i++) {
//             unordered_map<char, int> mpp;
//             for (int j = i; j < s.size(); j++) {
//                 mpp[s[j]]++;
//                 if (mpp[s[j]] > 2)  // jaise hi char jayda hoga 2 se
//                     break;         // break hojayega j wale loop se
//                 ans = max(ans, j - i + 1);
//             }
//         }
//         return ans;
//     }
// };