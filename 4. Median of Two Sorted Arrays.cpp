class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int i=0,j=0,m=nums1.size(),n=nums2.size();
        float median;
        vector<int> merge;

        while(i!=m&&j!=n){
            if(nums1[i]<=nums2[j]) {
                merge.push_back(nums1[i++]);
            }
            else{
                merge.push_back(nums2[j++]);
            }
        }

        while(i<m){
            merge.push_back(nums1[i++]);
        }
        while(j<n){
            merge.push_back(nums2[j++]);
        }

        if((m+n)%2==0){
           median=float((merge[(m+n)/2]+merge[((m+n)/2)-1])/2.0);
        }
        else{
            
            median=float(merge[(m+n)/2]);
        }

        return median;
    }
};
