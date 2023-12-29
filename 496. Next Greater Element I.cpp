class Solution {

public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int, int> map; 

        for(int i=nums2.size()-1;i>=0;i--){
            int element=nums2[i];

            if(st.empty()){
                st.push(element);
                map[element]=-1;
                continue;
            }
            if(st.top()>element){
                map[element]=st.top();
                st.push(element);
                continue;
            }

            while(!st.empty()&& st.top()<element){
                st.pop();
            }

            if(st.empty()){
                 st.push(element);
                map[element]=-1;
                continue;
            }
            else{
                map[element]=st.top();
                st.push(element);
                continue;
            }
     
        }

        for(int i=0;i<nums1.size();i++){
            ans.push_back(map[nums1[i]]);
        }

        return ans;
    }
};
