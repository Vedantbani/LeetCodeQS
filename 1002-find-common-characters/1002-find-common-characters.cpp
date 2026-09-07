class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> hash(26, 0);  /// first string ka store karega
        vector<string> ans;  /// final ans store hoga isme
        for (int i = 0; i < words[0].size(); i++) {
            hash[words[0][i] - 'a']++;  // 1st string ka freq. store
        }
        vector<int> freq(26, 0);
        for (int i = 1; i < words.size(); i++) {  // baaki sab ka store hoga
            for (int j = 0; j < words[i].size(); j++) {
                freq[words[i][j] - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                hash[i] = min(hash[i], freq[i]);  // min wala lenge kyoki woh
                freq[i] = 0;                 // woh harme present hoga
            }                  // freq. 0 kardenge next string ke liye
        }
        for (int i = 0; i < 26; i++) {
            int cnt = hash[i];
            while (cnt > 0) {
                char c = 'a' + i;
                string s;     // char to string conversion
                s = c;
                ans.push_back(s);
                cnt--;
            }
        }
        return ans;
    }
};