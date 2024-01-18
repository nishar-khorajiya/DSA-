class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int result = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = i;
            int count = 0;
            
            while (index > 0) {
                if (index % 2 == 1) {
                    count++;
                }
                index /= 2;
            }
            
            if (count == k) {
                result += nums[i];
            }
        }
        
        return result;
    }
};
