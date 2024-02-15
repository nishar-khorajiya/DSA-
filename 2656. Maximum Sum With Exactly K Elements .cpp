class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int score=0;

        while(k--){
            score+=nums[0]++;
        }

        return score;
    }
};
