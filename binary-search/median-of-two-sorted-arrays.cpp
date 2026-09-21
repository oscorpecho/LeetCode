class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>merged;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<=nums2[j]){
            merged.push_back(nums1[i]);
            i++;
        }
        else{
            merged.push_back(nums2[j]);
            j++;
        }
        }
        while(i<nums1.size()){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            merged.push_back(nums2[j]);
            j++;
        }
        if(merged.size()%2==0){
            int a=merged.size()/2;
            int b=(merged.size()/2)-1;
            return (merged[a]+merged[b])/2.0;
        }
        else{
            int c=(merged.size()/2);
            return merged[c];
        }
    }
};