class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            bool found = true;  // true rahega
            for (int j = 0; j < m; j++) {
                if (abs(arr1[i] - arr2[j]) <= d) {  // condn given in qsn
                    found = false;  // condn satisfy nhi hua toh false
                    break;         // break kardenge
                }
            }
            if (found == true)    // agar true hai matlab satisfy hua hai
                cnt++;       // cnt++ karte jayenge
        }
        return cnt;
    }
};