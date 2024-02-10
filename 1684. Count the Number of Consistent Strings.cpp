class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        int count = 0;
        for (string& word : words) {
            bool consistent = true;
            for (char& ch : word) {
                if (allowed.find(ch) == string::npos) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                count++;
            }
        }
        return count;
    }
};
