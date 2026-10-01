class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1)
            return stones[0];
        sort(stones.begin(), stones.end());
        while (stones.size() >= 2) {
            int n = stones.size();  // n update hote jayega har loop ke baad
            int a = stones[n - 1];  // isiliye andar likhe hai
            int b = stones[n - 2];  // a = n-1, b = n-2 wala value
            stones.pop_back();  // last value pop karenge
            stones.pop_back();  // last 2nd value pop karenge
            stones.push_back(a - b);  // dono ka diff. push kardenge
            sort(stones.begin(), stones.end());  // iske baad sort kardenge
        }
        return stones[0];
    }
};