class Solution {
public:
    int uniqueLetterString(string s) {
        int n = s.size();
        vector<int> left(n), right(n);
        vector<int> last(26, -1);    /// initially -1 hai vector meh
        
        // Find distance to the previous identical character
        for (int i = 0; i < n; i++) {
            left[i] = i - last[s[i] - 'A'];
            last[s[i] - 'A'] = i;
        }
        
        // Find distance to the next identical character
        fill(last.begin(), last.end(), n);  // fill vector meh n daaldega
        for (int i = n - 1; i >= 0; i--) {
            right[i] = last[s[i] - 'A'] - i;
            last[s[i] - 'A'] = i;
        }
        
        long long ans = 0;
        // Total unique character contributions in O(N) time
        for (int i = 0; i < n; i++) {
            ans += (long long)left[i] * right[i];
        }
        
        return ans;
    }
};


// // Bruteforce method (Gives TLE)
// class Solution {
// public:
//     bool f(string& temp) {  /// yeah jis substr meh har char 1 baar
//         unordered_map<char, int> mpp;  // hai usko count karega
//         for (int i = 0; i < temp.size(); i++) {
//             mpp[temp[i]]++;
//         }
//         for (auto i : mpp) {
//             if (i.second > 1)
//                 return false;
//         }
//         return true;
//     }
//     int count(string& temp) {  // agar koi substr meh common char hai
//         int cnt = 0;       // toh yeah joh char 1 baar hai usko count karega
//         unordered_map<char, int> mpp;
//         for (int i = 0; i < temp.size(); i++) {
//             mpp[temp[i]]++;
//         }
//         for (auto i : mpp) {
//             if (i.second <= 1) {
//                 cnt += i.second;
//             }
//         }
//         return cnt;
//     }
//     int uniqueLetterString(string s) {
//         int ans = 0;
//         for (int i = 0; i < s.size(); i++) {
//             string temp = "";
//             for (int j = i; j < s.size(); j++) {
//                 temp += s[j];
//                 if (f(temp))
//                     ans += temp.size();
//                 else
//                     ans += count(temp);
//             }
//         }
//         return ans;
//     }
// };