class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = trips.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({trips[i][1], trips[i][0]});  // starting from and passenger
            v.push_back({trips[i][2], -trips[i][0]});  // ending to and passenger
        }                  //(passenger in -ve because this passenger is deleted)
        sort(v.begin(), v.end());   // starting and eding ke basis meh sort kardenge
        int temp = 0;
        for (int i = 0; i < v.size(); i++) {
            temp += v[i].second;  // passenger wala add karte jayenge
            if (temp > capacity)
                return false;
        }
        return true;
    }
};