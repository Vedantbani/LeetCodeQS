class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cntone = 0;
        int flip = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                cntone++;
            else {
                flip++;
                flip = min(flip, cntone);
            }
        }
        return flip;
    }
};