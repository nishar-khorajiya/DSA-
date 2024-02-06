class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {

        int count =0;

        set<int>s(nums.begin(),nums.end());

        for(int i=0;i<s.size();i++)
        {
            if(s.find(nums[i]-diff)!=s.end()  && s.find(nums[i]-2*diff)!=s.end())
            {
                count++;
            }
        }   
        return count;    
    }
};
