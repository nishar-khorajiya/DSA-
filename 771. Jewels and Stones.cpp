class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> type;
        int ans=0;

        for(auto& j:jewels){
            type[j]=0;
        }

        for(auto& s:stones){
            if(type.find(s)!=type.end()) type[s]++;
        }

        for(auto& t:type){
            ans+=t.second;
        }

        return ans;
    }
};
