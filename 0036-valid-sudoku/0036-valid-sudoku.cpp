class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < 9; i++) {
            vector<int> v1(10, 0);  //store karega
            vector<int> v2(10, 0);
            for (int j = 0; j < 9; j++) {  // row wise check karega
                if (isdigit(board[i][j])) {   // like 0th row ke liye har coln check
                    v1[board[i][j] - '0']++;
                    if (v1[board[i][j] - '0'] > 1)
                        return false;
                }

                if (isdigit(board[j][i])) {  // coln wise check karega
                    v2[board[j][i] - '0']++;  // like 0th coln ke liye har row
                    if (v2[board[j][i] - '0'] > 1)
                        return false;
                }
            }
        }

        for (int x = 0; x < 9; x += 3) {   // 3*3 matrix check kareega
            for (int y = 0; y < 9; y += 3) {
                vector<int> v(10, 0);
                for (int i = x; i < x + 3; i++) {
                    for (int j = y; j < y + 3; j++) {
                        if (isdigit(board[i][j])) {
                            v[board[i][j] - '0']++;
                            if (v[board[i][j] - '0'] > 1)
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};