class Solution {
public:
    bool isPalindrome(string s) {
        
s.erase(std::remove_if(s.begin(), s.end(), 
[]( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());

transform(s.begin(), s.end(), s.begin(), ::tolower);
string p=s;
reverse(s.begin(),s.end());

       if(p==s){
             return true;
       }
       else{
             return false;
       }      

    }
};
