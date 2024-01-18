class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1,sum=0;

        while(n>0){
            int digit=n%10;
            mul*=digit;
            sum+=digit;
            n=n/10;
        }

        return mul-sum;
    }
};
