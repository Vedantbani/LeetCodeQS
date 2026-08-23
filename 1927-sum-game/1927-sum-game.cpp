class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        double ans = 0;
        for (int i = 0; i < n; i++) {
            int sign = 1;
            if (i < n / 2)  // startting ka 1st half -ve lenge
                sign = -1;
            else
                sign = 1;  // next half +ve lenge
            double value;
            if (num[i] == '?')  // agar ? aya toh 4.5 value((0 to 9)/2=4.5)
                value = 4.5;
            else
                value = num[i] - '0';  // string to int conversion

            ans += sign * value;
        }
        if (ans == 0)  // iska matlab 1st half 2nd half ke barabar hai
            return false;
        return true;
    }
};