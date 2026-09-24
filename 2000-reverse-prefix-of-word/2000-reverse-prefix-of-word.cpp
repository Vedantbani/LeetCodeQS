class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = -1;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                ind = i;  // 1st occuring index store karega
                break;   /// break kardega 1st milne ke baad
            }
        }
        if (ind == -1)
            return word;  // agar char nhi mila toh same word return
        reverse(word.begin(), word.begin() + ind + 1);  /// nhi toh utna word ko reverse
        return word;
    }
};