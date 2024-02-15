class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans(image.size(), vector<int>(image[0].size(), 0));

        for(int i=0;i<image.size();i++){
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<image[i].size();j++){
                ans[i][j]=image[i][j]==1?0:1;
            }
        }

        return ans;
    }
};
