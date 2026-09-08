class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        if (s1.size() > s2.size())
            return false;  // Not possible case
        for (int i = 0; i < n; i++) {
            hash1[s1[i] - 'a']++; // dono string ki freq. store hoga
            hash2[s2[i] - 'a']++;
        }
        if (hash1 == hash2)
            return true;
        for (int i = n; i < s2.size(); i++) {
            hash2[s2[i - n] -
                  'a']--;         // joh upar add kiye the usko remove karenge
            hash2[s2[i] - 'a']++; // aur aage ki string add karke check karenge
            if (hash2 == hash1)   // agar same hogaya matlab true
                return true;
        }
        return false;
    }
};