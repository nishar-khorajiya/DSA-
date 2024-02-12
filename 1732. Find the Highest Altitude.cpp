class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> altitude(n+1);

        altitude[0]=0;
        altitude[1]=gain[0];

        for(int i=1;i<n;i++){
            altitude.push_back(altitude[i]+gain[i]);
        }
        std::cout<<altitude[4];
        return *max_element(altitude.begin(), altitude.end());
    }
};
