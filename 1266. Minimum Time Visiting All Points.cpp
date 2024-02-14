class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count=0;

        for(int i=0;i<points.size()-1;i++){
            int px1=points[i][0];
            int py1=points[i][1];
            int px2=points[i+1][0];
            int py2=points[i+1][1];

            if(px1!=px2 || py1!=py2){
                int dx=abs(px1-px2);
                int dy=abs(py1-py2);

                dx>=dy?count+=dx:count+=dy;
            }
        }
        return count;
    }
};
