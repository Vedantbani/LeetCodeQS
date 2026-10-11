class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);
        while (left <= right) {
            if (c == left * left + right * right)
                return true;
            else if (c < ((left * left) + (right * right))) {
                right--;
            } else
                left++;
        }
        return false;
    }
};