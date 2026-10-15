class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9)    // not possible wala case
            return "";
        int nine = sum / 9;    // kitna 9 laga sakte hai woh batayega
        int remainder = sum % 9;   // jitna remainder bacha phir woh lagega
        string ans = string(nine, '9');   // 9 lagate jayenge nine times
        if (remainder > 0) {
            ans += to_string(remainder);  // remainder bhi laga denge
        } 
        ans.append(num - ans.length(), '0'); // baaki meh phir 0 laga denge
        return ans;
    }
};