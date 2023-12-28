class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size(), n = matrix[0].size();
        unordered_map<int, bool> row;
        unordered_map<int, bool> col;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for (auto r : row) {
            int temp = r.first;

            for (int i = 0; i < n; i++) {
                matrix[temp][i] = 0;
            }
        }

        for (auto c : col) {
            int temp = c.first;

            for (int i = 0; i < m; i++) {
                matrix[i][temp] = 0;
            }
        }
    }
};
