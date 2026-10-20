class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> hash1(26);   // isme text wale ka freq. store karenge
        for (int i = 0; i < text.size(); i++) {
            hash1[text[i] - 'a']++;
        }
        string s = "balloon";  
        vector<int> hash2(26);  // isme qsn meh jiska find karna hai uska
        for (int i = 0; i < s.size(); i++) {
            hash2[s[i] - 'a']++;
        }
        int ans = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (hash2[i] != 0) {  // qsn wale string ke freq. se compare kerenge
                ans = min(ans, hash1[i] / hash2[i]);
            }
        }
        return ans;
    }
};