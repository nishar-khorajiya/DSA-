class Solution {
public:
    int lengthOfLastWord(string s) {
        
        reverse(s.begin(),s.end());
        int count=0;
        char c;

        for(int i=0;i<s.length();i++){
            c=s[i];
            if(isspace(c)){
                if(count==0){
                    continue;
                }
                break;
            }
            else{
                count++;
            }
        }
        return count;
    }
};
