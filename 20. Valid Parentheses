#include <cstring>
class Solution {
public:
    bool isValid(string s) {
        
        map<char,char> m;
        m['}']='{';
        m[']']='[';
        m[')']='(';

        map<char,char>::iterator it;
        stack<char> st;
        char temp;
        for(int i=0;i < s.length();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }

            else if(s[i]=='}' || s[i]==']' || s[i]==')'){
                if(st.empty()){
                    return false;
                }
                else{
                    temp=st.top();
                    it=m.find(s[i]);

                    if(temp==it->second){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }

            }
        }
        return st.empty()?true:false;
    }
};
