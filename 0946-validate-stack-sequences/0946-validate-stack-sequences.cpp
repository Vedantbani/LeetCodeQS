class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        stack<int> st;  // stack isme pushed wala element push karenge
        int j = 0; // pooped wale ko track karega  
        for (int i = 0; i < n; i++) {
            st.push(pushed[i]);  // element push karte jayenge
            while (!st.empty() && st.top() == popped[j]) {  // chcek karenge
                st.pop();  // agar popped se match hoga toh pop kardenge
                j++;      // pointer aage badha denge
            }
        }
        if (st.empty())  ///  agar empty hoga toh true
            return true;
        return false;
    }
};