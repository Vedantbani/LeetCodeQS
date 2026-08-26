class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0;
        int r = 0;
        int cnt = 0;  /// cnt no. of ones
        string ans = "";
        while (r < s.size()) {
            if (s[r] == '1')
                cnt++;
            while (cnt == k) {
                string temp = s.substr(l, r - l + 1);
                if (ans == "" || temp.size() < ans.size() ||
                    (temp.size() == ans.size() && temp < ans)) {
                    ans = temp;
                }
                if (s[l] == '1')  // jab tak s[l]==1 hai tab tak window size
                    cnt--;     // kam karte jayenge left se
                l++;
            }
            r++;
        }
        return ans;
    }
};