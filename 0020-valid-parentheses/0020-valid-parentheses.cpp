class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st; // bracket store karega
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]); // opening wala mila toh direct push
            else {
                if (st.empty())  // agar opening wala bracket hai hi nhi
                    return false;  // toh direct false
                char ch = st.top();
                if ((s[i] == ')' && ch == '(') || (s[i] == '}' && ch == '{') ||
                    (s[i] == ']' && ch == '[')) {
                    st.pop(); // closing wale ke liye st.top() bhi dekhenge
                } else
                    return false; // agar kuch bhi alag mila toh dircet false
            }
        }
        if (st.empty())  // agar stack empty hai matlab true
            return true;
        return false;
    }
};