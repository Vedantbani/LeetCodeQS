class Solution {
public:
    void backtrack(vector<string>& result, string current, int opencount,
                   int closecount, int n) {
        if (opencount == n && closecount == n) {
            result.push_back(current);
            return;
        }
        if (opencount < n) {  
            backtrack(result, current + '(', opencount + 1, closecount, n);
        }
        if (closecount < opencount) {
            backtrack(result, current + ')', opencount, closecount + 1, n);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};