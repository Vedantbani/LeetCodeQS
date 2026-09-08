class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> hash(128, 0);
        int cnt = 0;
        for (int i = 0; i < jewels.size(); i++) {
            hash[jewels[i]]++;
        }
        for (int i = 0; i < stones.size(); i++) {
            if (hash[stones[i]] != 0) {
                cnt += hash[stones[i]];
            }
        }
        return cnt;
    }
};