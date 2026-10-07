class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;    // mpp meh freq. store karenge
        }
        vector<int> freq;
        for (auto i : mpp) {      // sab freq. ko isme daalke 
            freq.push_back(i.second);   // sort kardenge
        }
        sort(freq.begin(), freq.end());
        int ans = freq.size();
        for (auto i : freq) {   
            if (k >= i) {
                k -= i;    // iske baad remove karte jayenge
                ans--;    // aur ans wale se -- karte jayenge
            } else
                break;
        }
        return ans;
    }
};