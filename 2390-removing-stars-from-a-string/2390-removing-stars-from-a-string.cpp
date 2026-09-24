class Solution {
public:
    string removeStars(string s) {
        string ans;
        int n = s.size();
        int str = 0;
        for (int i = n - 1; i >= 0; i--) {  // piche se traverse karenge
            if (s[i] == '*')
                str++;    /// * cnt badhate jayenge
            else {
                if (str > 0)  // agar star hai toh -- kardenge
                    str--;   // (matlab skip kardenge chars ko)
                else
                    ans += s[i];  // jaise hi 0 hua toh add kardenge ans string meh
            }
        }
        reverse(ans.begin(), ans.end());  // reverse kardenge
        return ans;
    }
};