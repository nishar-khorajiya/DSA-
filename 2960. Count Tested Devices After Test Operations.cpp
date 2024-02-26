class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int tested=0,n=batteryPercentages.size();

        for(int i=0;i<n;i++){
            if(batteryPercentages[i]>0){
                tested++;
                for(int j=i+1;j<n;j++){
                    batteryPercentages[j]--;
                }
            }
            else{
                continue;
            }
        }

        return tested;
    }
};
