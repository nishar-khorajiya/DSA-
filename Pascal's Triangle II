class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pt(rowIndex+1);

        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(j==0||j==i){
                    pt[j]=1;
                }
                else{
                    pt[j]=pt[j]+pt[j-1];
                }
            }
        }
        return pt;
    }
};
