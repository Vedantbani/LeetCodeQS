class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int maxind = 0;
        int mini = INT_MAX;
        int minind = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxind = i;
            }
            if (nums[i] < mini) {
                mini = nums[i];
                minind = i;
            }
        }
        // isse minindex pehele aajayega aur maxindex baad meh
        if (minind > maxind) {
            swap(minind, maxind);
        }
        // Three possible deletion strategies:
        // 1. Remove both from the front
        int deleteFromFront = maxind + 1;
        
        // 2. Remove both from the back
        int deleteFromBack = n - minind;
        
        // 3. Remove one from the front and one from the back
        int deleteBothSides = (minind + 1) + (n - maxind);
        
        // Return the minimum of all three strategies
        return min(deleteFromFront, min(deleteFromBack, deleteBothSides));
    }
};
