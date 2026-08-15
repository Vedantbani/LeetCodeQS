class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal; // XOR
        int cnt = 0;
        while (ans > 0) {
            cnt += ans & 1;  // number of 1 count karenge
            ans = ans >> 1;  // 1-1 bit right shift karte jayenge
        }
        return cnt;
    }
};