class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ return std::tolower(c); });

        return s;
    }
};
