class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        sort(nums1.begin(), nums1.end());
        vector<pair<int, int>> temp;  // store values with its orignal index
        for (int i = 0; i < n; i++) {
            temp.push_back({nums2[i], i}); 
        }
        sort(temp.begin(), temp.end());
        int l = 0;  // left pointer  
        int r = n - 1;  // right pointer
        vector<int> ans(n);
        for (auto i : nums1) {  // nums1 meh traverse karenge
            if (i > temp[l].first) {    // agar temp[l] se bada hua toh ans vector
                ans[temp[l].second] = i;  // meh temp[l] wale index meh daaldenge
                l++;
            } else {  // nhi toh phir right wala sabse bada value wale index me hoga
                ans[temp[r].second] = i;
                r--;
            }
        }
        return ans;
    }
};