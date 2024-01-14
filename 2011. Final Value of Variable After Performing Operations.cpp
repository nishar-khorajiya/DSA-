class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;

        for (const std::string& operation : operations) {
            if(operation=="++X"||operation=="X++") {
                ans++;
            }
            if(operation=="--X"||operation=="X--") {
                ans--;
            }
        }

        return ans;
    }
};
