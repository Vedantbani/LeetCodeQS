class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int width = 0;
        int line = 1;
        for (int i = 0; i < s.size(); i++) {
            width += widths[s[i] - 'a'];
            if (width > 100) {
                width = widths[s[i] - 'a'];
                line++;
            } else
                continue;
        }
        return {line, width};
    }
};