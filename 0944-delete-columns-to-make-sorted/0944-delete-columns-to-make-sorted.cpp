class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int s = strs[0].size();  // kitne chars hai ek string ke andar uska size
        int l = 0;   // pointer joh string ke chars meh traverse karega
        int cnt = 0;  /// cnt store karega kitna col delete karna hai
        while (l < s) {
            for (int i = 0; i < strs.size() - 1; i++) {
                if (strs[i][l] <= strs[i + 1][l])  // agar aage wala char bada 
                    continue;    //ya same hai toh normal continue rakhega
                else {
                    cnt++;  // nhi toh cnt++ hoga kyoki woh col. delete hoga
                    break;  /// phir break kardega
                }         // (matlab next char compare karega har string ka)
            }
            l++;  /// char meh traverse karega har string ka
        }
        return cnt;
    }
};