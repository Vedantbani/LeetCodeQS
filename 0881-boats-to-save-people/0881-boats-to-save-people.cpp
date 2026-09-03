class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int cnt = 0;
        sort(people.begin(), people.end());
        int s = 0;
        int e = n - 1;
        while (s <= e) {
            if (people[s] + people[e] <= limit) {
                s++;  // each boat carry atmost 2 people
                e--;   // isiliye 2 pointer approach
            } else {
                e--;  /// agar sum bada hua toh end pointer-- hoga
            }
            cnt++;  // cnt hamesha ++ hote rahega har loop ke baad
        }
        return cnt;
    }
};