class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.length();
        for(int i=0,j=n-1;i<n-1;i++,j--){
            if(s[i]!=s[j]){
                if(s[i]>s[j]){
                    s[i]=s[j];
                }
                else{
                    s[j]=s[i];
                }
            }
        }
        return s;
    }
};
