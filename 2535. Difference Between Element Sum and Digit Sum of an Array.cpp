class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0,dsum=0;

        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            esum+=num;

            while(num!=0){
                int digit=num%10;
                dsum+=digit;
                num=num/10;
            }
        }

        return esum-dsum>=0?esum-dsum:dsum-esum;
    }
};
