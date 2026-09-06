class Solution {
public:
// Tabulation Method(Bottom Up approach)
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<double>> dp(n + 1, vector<double>(m + 1, 0));
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        for (int j = 1; j <= m; j++) {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return (int)dp[n][m];
    }
};

// Memoization Method (TopDown)

// class Solution {
// public:

//     int sub(int ind1, int ind2, string& s, string& t, vector<vector<int>>&
//     dp) {
//         if (ind2 < 0)
//             return 1;

//         if (ind1 < 0)
//             return 0;

//         if (dp[ind1][ind2] != -1)
//             return dp[ind1][ind2];

//         if (s[ind1] == t[ind2])
//             return dp[ind1][ind2] = sub(ind1 - 1, ind2 - 1, s, t, dp) +
//                                     sub(ind1 - 1, ind2, s, t, dp);
//         else
//             return dp[ind1][ind2] = sub(ind1 - 1, ind2, s, t, dp);
//     }
//     int numDistinct(string s, string t) {
//         int n = s.size();
//         int m = t.size();
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
//         return sub(n - 1, m - 1, s, t, dp);
//     }
// };
