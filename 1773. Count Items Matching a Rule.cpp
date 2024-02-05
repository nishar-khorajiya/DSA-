class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey,string ruleValue) {
        int c = 0;
        for (const std::vector<std::string>& item : items) {
            if (ruleKey == "color") {
                if (item[1] == ruleValue) {
                    c++;
                }
            }
            if (ruleKey == "type") {
                if (item[0] == ruleValue) {
                    c++;
                }
            }
            if (ruleKey == "name") {
                if (item[2] == ruleValue) {
                    c++;
                }
            }
        }

        return c;
    }

 };
