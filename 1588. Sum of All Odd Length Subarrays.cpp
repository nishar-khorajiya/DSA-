class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0, sum = 0;
        for(int i=0; i<arr.size(); i++) {
            sum = 0;
            for(int j=i; j<arr.size(); j++) {
                sum += arr[j];
                if( (j-i+1)%2 != 0 )
                    res += sum;
            }
        }
        return res;
    }
};
