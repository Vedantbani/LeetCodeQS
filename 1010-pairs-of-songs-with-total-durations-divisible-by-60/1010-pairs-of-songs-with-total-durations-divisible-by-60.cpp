class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        int arr[60] = {0};     // rem ka freq. store karega
        for (int i = 0; i < n; i++) {
            int rem = nums[i] % 60;
            int complement = (60 - rem) % 60;  // rem meh kya add karna padega
            cnt += arr[complement];   // dekhenege arr. meh present hai ki nhi
            arr[rem]++;           // rem ko hamesha ++ karte jayenge
        }
        return cnt;
    }
};