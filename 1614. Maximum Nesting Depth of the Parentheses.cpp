class Solution {
public:
    int maxDepth(string s) {
        int n=s.length(),depth=0,maxi=0;
        if(n==0||n==1) return depth;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                depth++;
            }
            if(s[i]==')'){
               maxi=max(maxi,depth);
               depth--;
            }
        }

        return maxi;
    }
};
