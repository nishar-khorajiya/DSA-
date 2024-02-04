class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";

        for(string word:word1){
            for(char ch:word){
                s1.push_back(ch);
            }
        }
        for(string word:word2){
            for(char ch:word){
                s2.push_back(ch);
            }
        }

        return s1==s2;
    }
};
