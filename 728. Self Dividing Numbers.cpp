class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i=left;i<=right;i++){
            int c=0;
            int n=i;
            while(n>0){
                int rem=n%10;
                
                if(rem!=0 && i%rem==0){
                    c=1;
                }
                else{
                    c=0;
                    break;
                }
                n=n/10;
            }

            if(c){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
