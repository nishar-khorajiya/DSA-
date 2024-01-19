class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int pre=0,suf=0,n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        vector<int> ans;
       
        for(int i=0;i<n;i++){
            if(i>0) pre+=nums[i-1];
            left[i]=pre;
        }
        for(int i=n-1;i>=0;i--){
            if((int)i + 1 < n) suf+=nums[i+1];
            right[i]=suf;
        }
        for(int i=0;i<n;i++){
            ans.push_back(abs(left[i]-right[i]));
        }

        return ans;
    }
};
