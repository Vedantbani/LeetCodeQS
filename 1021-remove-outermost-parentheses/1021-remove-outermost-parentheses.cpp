class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int bal = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (bal > 0) {  // jaise hi bal>0 hua toh phir woh sab add hoga
                    ans += s[i];
                }   // agar bal=0 hua toh woh wala bracket remove hoga
                bal++;
            } else {
                bal--;
                if (bal > 0) {   // jaise hi bal>0 hua toh phir woh sab add hoga
                    ans += s[i];
                }  // agar bal=0 hua toh woh wala bracket remove hoga
            }
        }
        return ans;
    }
};