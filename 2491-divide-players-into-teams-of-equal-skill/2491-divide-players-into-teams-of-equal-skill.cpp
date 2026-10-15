class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int s = skill[0] + skill[n - 1];   // itne sum walo ka pair banana hai
        long long sum = 0;
        for (int i = 0; i < n / 2; i++) {
            if (skill[i] + skill[n - i - 1] != s)  // agar ek bhi pair sum alag hua
                return -1;           // toh return -1
            sum += skill[i] * skill[n - i - 1];   // nhi toh multiply than add
        }
        return sum;
    }
};