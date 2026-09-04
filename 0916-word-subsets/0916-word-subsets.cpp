class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> mpp(26, 0);
        vector<string> ans;
        for (auto i : words2) {
            vector<int> freq(26, 0);
            for (auto j : i) {   // joh joh req. char hai sabko
                freq[j - 'a']++; // store karlenge
            }
            for (int i = 0; i < 26; i++) {  /// maxm wala freq hi store karenge
                mpp[i] = max(mpp[i], freq[i]);
            }
        }

        for (auto i : words1) {
            vector<int> curr(26, 0);
            for (auto j : i) { // har words ka freq. store karenge
                curr[j - 'a']++;
            }
            bool ok = true;
            for (int i = 0; i < 26; i++) {
                if (curr[i] < mpp[i]) { // agar jitna min chaiyeh
                    ok = false;         // ussse kam hoga toh false hojayega
                    break;
                }
            }
            if (ok)
                ans.push_back(i);
        }
        return ans;
    }
};