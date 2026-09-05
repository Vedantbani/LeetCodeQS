class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3)
            return false;
        int cnt = 0;
        int i = 0;
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            cnt++;  // increasing ki condition
            i++;
        }
        if (cnt == 0 || cnt == n - 1)  // agar 1st element ya last element
            return false;    // hai toh false hoga
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            cnt++;  // decreasing ki condition
            i++; 
        }
        if (cnt == n - 1)  // agar yeah follow hua toh true
            return true;
        return false;
    }
};