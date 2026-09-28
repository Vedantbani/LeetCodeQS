class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxi = 0;  // maxi store karega
        int cnt = 0;   // cnt variable cnt karega kitna opening hai
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                cnt++;  // cnt++ hote jayega aur maxi update hoga
                maxi = max(maxi, cnt);
            }
            else if (s[i] == ')' && cnt > 0) {  
                cnt--;    // agar ) mila toh cnt-- hoga
            }
        }
        return maxi;
    }
};