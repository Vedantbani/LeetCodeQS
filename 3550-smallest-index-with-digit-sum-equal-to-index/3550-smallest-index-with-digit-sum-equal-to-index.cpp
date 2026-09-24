class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int dig = 0;
            while (nums[i] != 0) {  // jab tak no. 0 nhi hojata tab tak
                dig += nums[i] % 10;  // uska digit sum karte jayenge
                nums[i] = nums[i] / 10;
            }
            if (dig == i) {  //agar sum == index agaya toh wahi return kardenge
                ans = i;   // kyoki minm index wala chaiyeh
                break;
            }
        }
        return ans;
    }
};