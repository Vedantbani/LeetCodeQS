class Solution {
public:
    int minDeletions(string s) {
        int ans = 0;
        vector<int> freq(26, 0);  // freq. store karega
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        unordered_set<int> seenfreq;  // same freq. ka available hai ki nhi
        for (int i = 0; i < 26; i++) {  // woh batayega
            int f = freq[i];
            while (f > 0 && seenfreq.find(f) != seenfreq.end()) {
                f--;  /// jab tak f>0 aur f nhi hai set meh 
                ans++;  // present tab tak f-- karte jayenge and ans++
            }
            if (f > 0) {  // agar f>0 hai toh usko set meh daaldenge
                seenfreq.insert(f);
            }
        }
        return ans;
    }
};