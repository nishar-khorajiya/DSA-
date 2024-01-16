class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        int maxi = INT_MIN;
        for(int i = 0;i<c.size();i++){
            if(maxi<c[i]){
                maxi = c[i];
            }
        }
        vector<bool>ans;
        for(int i = 0;i<c.size();i++){
            if(c[i]+ec >=maxi){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};
