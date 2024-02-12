class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int i=0;
        if(size(words) != size(s)){
            return false;
        }
        for(string& word:words){
            if(word[0]!=s[i]) return false;
            else i++;
        }

         return true;
    }
};
