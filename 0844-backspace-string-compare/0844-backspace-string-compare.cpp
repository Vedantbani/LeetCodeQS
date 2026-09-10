class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#')    // iske alawa sab push karna hai
                st1.push(s[i]);
            else if (st1.size() > 0 && s[i] == '#')  
                st1.pop();    // agar # hai toh pop karna hai
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != '#')     // iske alawa sab push karna hai
                st2.push(t[i]);
            else if (st2.size() > 0 && t[i] == '#')  
                st2.pop();    // agar # hai toh pop karna hai
        }
        while (!st1.empty() && !st2.empty()) {
            if (st1.top() == st2.top()) {
                st1.pop();   /// jab sab push pop hojayega uske baas bacche char ko
                st2.pop();  // compare karenge ek ek pop karke dono meh se
            } else
                return false;    // agar top same nhi hua toh return false
        }
        if (!st1.empty() || !st2.empty())  // agar kisimeh bhi char present hai
            return false;           /// matlab woh same nhi hoga toh return false
        return true;
    }
};