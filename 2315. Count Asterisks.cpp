class Solution {
public:
    int countAsterisks(string s) {
        int ans=0,count=0;
        for(int i=0;i<s.length();i++){

            if(s[i]=='|'&&count==0) count=1;
            else if(s[i]=='|'&&count==1) count=0;

            if(count==0&&s[i]=='*'){
                ans++;
            }
        }

        return ans;
    }
};
