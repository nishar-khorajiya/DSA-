class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        
        int l=1,h=x;

        while(l<=h){
           long long mid=l+(h-l)/2;

            if(mid*mid==x){
                ans=mid;
                break;
            }
            else if(mid*mid<x){
                l=mid+1;
                ans=mid;
            }
            else{
             h=mid-1;
            }
        }
        return ans;

    }
};
