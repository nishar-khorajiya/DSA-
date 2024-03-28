class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char,string> m;
        int count=0;
        int n=rings.length();

        if(n<6) return 0;

        for(int i=0;i<n;i+=2){
           if(m[rings[i+1]].find(rings[i])!= std::string::npos) continue;
           else m[rings[i+1]].push_back(rings[i]);
        }

        for(auto& a:m){
            if(a.second.length()==3) count++;
        }

        return count;
    }
};
