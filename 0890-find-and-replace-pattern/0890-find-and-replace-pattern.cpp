class Solution {
public:
    bool check(string &temp, string &pattern) {
        unordered_map<char, int> hash; // store temp string freq. with chars
        unordered_map<char, int> mpp;  // store pattern string freq. with chars
        if (temp.size() != pattern.size())
            return false;
        int ind1 = 0, ind2 = 0;
        for (int i = 0; i < temp.size(); i++) {
            char c1 = temp[i];
            char c2 = pattern[i];
            if (hash.find(c1) == hash.end()) {
                hash[c1]=ind1++;
                
            }
            if (mpp.find(c2) == mpp.end()) {
                mpp[c2]=ind2++;
            }
            if (hash[c1] != mpp[c2])  // uss charindex meh same agar 
                return false;   // same ind store hai toh true else false
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        vector<string> ans;
        for (auto i : words) {
            if (check(i, pattern))
                ans.push_back(i);
        }
        return ans;
    }
};