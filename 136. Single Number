class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        int count=0;
        if(nums.length==1)
        {
            return nums[0];
        }
        for(int i=0; i<nums.length-2;i+=2){
           
            count=0;
           if( nums[i]==nums[i+1]){
               count++;
           }
            if (count==1){
                continue;
            }
            else{
                return nums[i];
                
            }
        }
        return nums[nums.length-1];
    }
}
