class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> point;
        int max=-1;
        for(int i=0;i<points.size();i++){
            point.push_back(points[i][0]);
        }

        sort(point.begin(),point.end());

        for(int i=1;i<point.size();i++){
            int sub=point[i]-point[i-1];
            if(sub>max){
                max=sub;
            }
        }

        return max;

    }
};
