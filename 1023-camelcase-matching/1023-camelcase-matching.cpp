class Solution {
public:
    bool check(string& a, string& b) {
        int i = 0; // string a meh traverse karega
        int j = 0; // string b meh traverse karega
        while (i < a.size()) {
            if (j < b.size() && a[i] == b[j]) {
                j++;  // agar same hai toh j++ bhi hoga
            }
            else if (isupper(a[i]))  // extra uppercase mila toh direct
                return false;         // return false kardega
            
            i++;  // i++ har step ke baad hoga
        }
        return j == b.size();
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(check(queries[i], pattern));
        }
        return ans;
    }
};