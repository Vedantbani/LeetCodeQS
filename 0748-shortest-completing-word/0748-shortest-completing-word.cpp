class Solution {
public:
    bool check(char c) {  // check karega ki character hai ki nhi
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            return true;
        }
        return false;
    }
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string ans = "";
        vector<int> hash(26, 0);  // licenseplate wala charko store karega

        for (int i = 0; i < licensePlate.size(); i++) {
            if (check(licensePlate[i])) {
                hash[tolower(licensePlate[i]) - 'a']++;
            }
        }
        for (int i = 0; i < words.size(); i++) {
            vector<int> wordhash(26, 0);
            for (int j = 0; j < words[i].size(); j++) {
                wordhash[words[i][j] - 'a']++;
            }
            bool ok = true; // minm licenseplate char jitna toh hone chaiyeh
            for (int i = 0; i < 26; i++) {
                if (wordhash[i] < hash[i]) {
                    ok = false;  // nhi hua toh false kardenge
                    break;       /// matlab woh word nhi ho sakta
                }
            }
            if (ok) {  
                if (ans == "" || words[i].size() < ans.size()) {
                    ans = words[i];
                }
            }
        }
        return ans;
    }
};