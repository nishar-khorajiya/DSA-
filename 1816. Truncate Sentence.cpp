class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count=1;

        for(int i=0;i<s.length();i++){

            if(s[i]==' '){
                ans.push_back(s[i]);
                count++;
            }
            else{
                ans.push_back(s[i]);
            }
            if(count==k+1) break;
        }
        size_t pos = ans.find_last_not_of(" \t\n\r\f\v");
        ans.erase(pos + 1);
        return ans;
    }
};
