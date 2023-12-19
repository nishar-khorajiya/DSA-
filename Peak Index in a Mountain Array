class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,i=0;
        int h=arr.size()-1;

        while(l<h){
            int mid =(l+h)/2;

            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
                i=mid;
                break;
            }
            else if(arr[mid]<arr[mid+1]){
                l=mid;
            }
            else if(arr[mid]<arr[mid-1]){
                h=mid;
            }
        }
        return i;
    }
};
