class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> s1(26, 0);
        vector<int> t1(26, 0);
        for (int i = 0; i < s.size(); i++) {
            s1[s[i] - 'a']++;     // string s ka freq. store hoga
        }
        for (int j = 0; j < t.size(); j++) {
            t1[t[j] - 'a']++;    // string t ka freq. store hoga
        }
        int steps = 0;
        for (int i = 0; i < 26; i++) {
            steps += abs(s1[i] - t1[i]);   // dono freq. ka dff lenge
        }
        return steps / 2;            // phir divide by 2 kardenge
    }
};