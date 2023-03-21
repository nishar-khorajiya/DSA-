class Solution {
 public:
//     int firstBadVersion(int n) {
//        long long int l=0,h=n,ans=0,mid=0;

//         while(l<=h){
//              mid=(l+h)/2;
//             bool f=isBadVersion(mid);

//             if(f==1){
//                 ans=mid;
//             }
//             else{
//                 h=mid-1;
//             }

//         }
//         return ans;
//     }
// };

    int firstBadVersion(int n) {
        long int l=1;
       long int h=n;
       long int ans=0;
               //int  mid=s+(end-s)/2;
             long int mid=(l+h)/2;
        while(l<=h)
        {
         bool flag=isBadVersion(mid);
            if(flag==false)
            {
                l=mid+1;
            }
            if(flag==true)
            {
                h=mid-1;
                ans=mid;
            }
            mid=(l+h)/2;
        }
        return ans;
    }
 };
