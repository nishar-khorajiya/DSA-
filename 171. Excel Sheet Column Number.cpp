class Solution {
public:
    int titleToNumber(string columnTitle) {
        int size=columnTitle.length();
        int ans =0;

        for (int i = 0; i < size; i++) {
            ans = ans * 26 + (columnTitle[i] - 'A' + 1);
        }
        return ans;
    }
};
