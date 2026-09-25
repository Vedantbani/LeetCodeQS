class Solution {
public:
    string clearStars(string s) {
        string ans;
        int n = s.size();
        vector<vector<int>> pos(26);
        vector<bool> deleted(n, false);
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {  
                deleted[i] = true;  // true mark kardenege delete karne ke liye
                for (int c = 0; c < 26; c++) {
                    if (!pos[c].empty()) { //star mila hai toh starting se start karenge
                        deleted[pos[c].back()] = true;  // 1st char jaise hi milega 
                        pos[c].pop_back();     // usko delete kardenge aur 
                        break;        // pop bhi kardenge uska index and break kardenge
                    }
                }
            } else
                pos[s[i] - 'a'].push_back(i);  // push karte jayenge
        }
        for (int i = 0; i < n; i++) {
            if (!deleted[i])
                ans += s[i];
        }
        return ans;
    }
};