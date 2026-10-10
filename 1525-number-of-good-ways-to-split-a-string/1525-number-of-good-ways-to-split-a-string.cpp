class Solution {
public:
    int numSplits(string s) {
        int cnt = 0;
        unordered_map<char, int> left;
        unordered_map<char, int> right;
        for (int i = 0; i < s.size(); i++) {
            right[s[i]]++;   // pahele right meh sab daaldenge
        }
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            left[s[i]]++;  // phir left meh daalte jayenge
            right[c]--;    // aur right wale se minus karte jayenge

            if (right[s[i]] == 0)   // agar zero hua toh erase kardenge
                right.erase(c);
            if (left.size() == right.size())
                cnt++;
        }
        return cnt;
    }
};