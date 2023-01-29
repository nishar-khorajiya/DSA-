class Solution {
public:
    bool checkRecord(string s) {
      
       
        int ab=0,late=0,pr=0,a=0,l=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='A'){
                 ab++;
                 late=0;
                 if(ab>=2){
                     a++;
                     break;
                 }
             }
             else if(s[i]=='L'){
                 late++;
                 
                 if(late>=3){
                     l++;
                     break;
                 }
             }
             else{
                 
                 late=0;
             }
        }

        if(a!=0){
        return false;
        }

        else if(l!=0){
        return false;
        }

        return true;

    }
};
