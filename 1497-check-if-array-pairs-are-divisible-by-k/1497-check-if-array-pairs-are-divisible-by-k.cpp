class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> f(k, 0);
        for (int i = 0; i < n; i++) {
            int t = ((arr[i] % k) + k) % k;  // normalize karenge
            int target = (k - t) % k;    // target hai
            if (f[target]) {   // agar target wala hai toh -- kardenge
                f[target]--;    // matlab uska pair bangaya
            } else {
                f[t]++;     // nhi toh usko add kardenge
            }
        }
        for (int i = 0; i < f.size(); i++) {
            if (f[i])   // koi bhi element bach gaya toh false
                return false;
        }
        return true;
    }
};