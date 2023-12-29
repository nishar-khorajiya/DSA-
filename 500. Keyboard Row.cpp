class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};    
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        
        vector<string> ans;

        for(string &word:words){
            int c1=0,c2=0,c3=0;

            for(char &w:word){
                char c=tolower(w);
                if(row1.find(c) != row1.end())    
                    c1++;
                if(row2.find(c) != row2.end())
                    c2++;
                if(row3.find(c) != row3.end())
                    c3++;

              
            }
              if(c1==word.length()||c2==word.length()||c3==word.length()){
                    ans.push_back(word);
                }
        }
        return ans;
         
    
    }
};
