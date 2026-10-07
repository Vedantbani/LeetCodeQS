class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;    // arr. ka value store karega
        }
        int maxi = -1;
        for (auto i : mpp) {   
            if (i.first == i.second)  
                maxi = max(maxi, i.first);
        }
        return maxi;
    }
};