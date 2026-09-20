class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int d = 26 - (s[i] - 'a');   // 26-ascii value karenge(qsn meh bola hai)
            d = d * (i + 1);    // phir joh ayega usko uske ind se multiply
            ans += d;       // phir d ko ans meh add karte jayenge
        }
        return ans;
    }
};