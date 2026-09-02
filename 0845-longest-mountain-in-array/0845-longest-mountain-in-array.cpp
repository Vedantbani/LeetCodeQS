class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int len = 0;
        if (n < 3)  // not possible case
            return 0;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int left = i;  // pahele index nikalenge jiska aage piche
                int right = i;  // ka element usse chota ho
                while (left >= 1 && arr[left] > arr[left - 1]) {
                    left--;  // jab tak follow hora  hai -- karte jayenge
                }
                while (right < n - 1 && arr[right] > arr[right + 1]) {
                    right++; // jab tak follow hora  hai ++ karte jayenge
                }
                len = max(len, right - left + 1);  // maxlen update
            }
        }
        return len;
    }
};