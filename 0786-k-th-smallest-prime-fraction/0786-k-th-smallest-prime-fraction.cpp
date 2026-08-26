class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double, pair<int, int>>> fraction; // val and fraction store
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                double val = (double)arr[i] / arr[j];
                fraction.push_back({val, {arr[i], arr[j]}});
            }
        }
        sort(fraction.begin(), fraction.end()); /// value ki hisab se sort kardenge
        return {fraction[k - 1].second.first,
                fraction[k - 1].second.second}; // return
    }
};