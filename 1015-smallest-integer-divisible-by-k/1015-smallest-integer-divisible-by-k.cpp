class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k == 1)
            return 1;
        int rem = 0;
        for (int i = 1; i <= k; i++) {
            rem = (rem * 10 + 1) % k; // rem meh 1 digit add karte jayenge
            if (rem == 0)      // agar jis bhi i value ke liye divisible hua
                return i;        // toh return kardenge i
        }
        return -1;
    }
};