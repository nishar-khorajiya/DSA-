class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans(s.length(), ' '); 

        for (int i = 0; i < s.length(); i++) {
            if (indices[i] >= 0 && indices[i] < s.length()) {
                ans[indices[i]] = s[i];
            }
        }

        return ans;
    }
};
