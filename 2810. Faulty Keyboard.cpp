class Solution {
public:
    string finalString(string s) {
        string ans;
        int i=0,j=0;

        for(char& c:s){
            if(c=='i'){
                i=0;j=ans.length()-1;
                while(i<j){
                    swap(ans[i++],ans[j--]);
                }
            }
            else{
                ans.push_back(c);
            }
        }

        return ans;
    }
};
