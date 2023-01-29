class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid=0,l=0;
        int h=nums.size()-1;

        while(l<=h){
            mid=(l+h)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
       
        if(nums[mid]<target){
            return mid+1;
        }
        else{
            if(mid-1==-1){
                return 0;
            }
            else{
            return mid;
            }
        }
    }
};
