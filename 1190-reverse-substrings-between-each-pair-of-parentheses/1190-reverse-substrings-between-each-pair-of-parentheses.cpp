class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        stack<int> st;
        string ans;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') // jaise hi opening wala mila
                st.push(i);  // toh uska index push kardenge
            else if (s[i] == ')') {
                int start = st.top();    // close wala mila toh index pop karke
                reverse(s.begin() + start, s.begin() + i);  // utna string ko reverse
                st.pop();
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] != '(' && s[i] != ')')
                ans += s[i];
        }
        return ans;
    }
};