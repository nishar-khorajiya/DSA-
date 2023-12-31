class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> m;

        for(auto n:nums){
            if(m.find(n)!= m.end()){
                m[n]++;
            }
            else{
                m[n]=1;
            }
        }

        for(auto n:nums){
            if(m[n]>nums.size()/2){
                return n;
            }
        }

        return -1;
    }
};
