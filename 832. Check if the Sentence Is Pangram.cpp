class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> m;

        for(char& c:sentence){
           m.insert(c);
        }

        if(m.size()<26) return false;
        return true;
    }
};
