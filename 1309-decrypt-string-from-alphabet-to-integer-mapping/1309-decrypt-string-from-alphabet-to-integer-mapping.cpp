class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        int i = 0;
        string ans = "";
        while (i < n) {
            if (i + 2 < n && s[i + 2] == '#') {
                int num =
                    stoi(s.substr(i, 2)); // 2 digit wala ko convert karega
                ans += char(num - 1 + 'a');
                i += 3;
            } else {
                int num = s[i] - '0';
                ans += char(num - 1 + 'a');  // 1 digit wala
                i++;
            }
        }
        return ans;
    }
};