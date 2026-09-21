class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2=nums2.size();
        unordered_map<int,int>m;
        for(int x:nums1){
            m[x]++;
        }
        vector<int>result;
        for(int y:nums2){
            if(m[y]>0){
                result.push_back(y);
                m[y]--;
            }
        }
        return result;

    }
};