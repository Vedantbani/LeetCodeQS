class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0;
        int maxi = 0;
        int cost = 0;
        for (int i = 0; i < s.size(); i++) {
            cost += abs(s[i] - t[i]);
            while (cost > maxCost) {  // bada mila toh
                cost -= abs(s[left] - t[left]);
                left++;  // jab tak bada milelag tab tak left++ 
            }      // hote jayega
            maxi = max(maxi, i - left + 1);  // maxi update hote jayega
        }
        return maxi;
    }
};