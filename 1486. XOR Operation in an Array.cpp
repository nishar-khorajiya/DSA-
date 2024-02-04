class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int result;

        for(int i=0;i<n;i++){
            nums.push_back(start+2*i);
            if(nums.size()==1){
                result=nums[0];
            }
            else{
                result^=nums[i];
            }
        }

        return result;
    }
};
