class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cur,prev,count=1,maxi=0;

        if(nums.size()==0 || nums.size()==1)
         return nums.size();

        for(int i=1;i<nums.size();i++){
            if (nums[i] != nums[i - 1]) {
                if (nums[i] == nums[i - 1] + 1) {
                    count++;
                } else {
                    maxi = max(maxi, count);
                    count = 1;
                }
            }

        }
        return maxi>count?maxi:count;
    }
};


