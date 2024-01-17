class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=INT_MIN;

        for(string word:sentences){
            int count=0;
            for(char c:word){
                if(c==' ') count++;
            }

            if(max<count+1) max=count+1;
        }
        return max;
    }
};
