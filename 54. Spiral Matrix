class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;

        int srow=0,scol=0,count=0;
        int erow=row-1,ecol=col-1;

        while(count<total){

            for(int i=scol;i<=ecol && count<total;i++){
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;

            for(int i=srow;count<total && i<=erow ;i++){
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;

            for(int i=ecol;count<total && i>=scol ;i--){
                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;

            for(int i=erow;count<total && i>=srow ;i--){
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
        }
        return ans;
    }
};
