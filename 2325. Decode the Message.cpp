class Solution {
public:
    string decodeMessage(string key, string message) {
        int j=97;
        string secret;
        unordered_map<char,char> m;

        for(char& c:key){
            if(m.find(c)!=m.end() || c==' '){
                continue;
            }
            else{
                m[c]=static_cast<char>(j);
                j++;
            }
        }

        for(char& c:message){
            if(m.find(c)!=m.end()){
                secret.push_back(m[c]);
            }
            else{
                secret.push_back(' ');
            }
        }

        return secret;
    }
};
