class Solution {
public:
    int countDigits(int num) {
        int n=num,count=0;

        while(num!=0){
            int d=num%10;

            if(n%d==0) count++;

            num=num/10;
        }

        return count;
    }
};

