class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> group;

        for (int i = 0; i < groupSizes.size(); i++) {
            group[groupSizes[i]].push_back(i);
        }

        for (auto& pair : group) {
            int k = pair.first;
            vector<int> f = pair.second;
            int c = f.size() / k;
            int l = 0;
            for (int i = 0; i < c; i++) {
                vector<int> v;
                for (int j = 0; j < k; j++) {
                    v.push_back(f[l++]);
                }
                ans.push_back(v);
            }
        }
    
    return ans;
}
};
