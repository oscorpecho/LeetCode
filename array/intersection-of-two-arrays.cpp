class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_set<int>s1;
        unordered_set<int>ans;
        for(int x:nums1){
            s1.insert(x);
        }
        for(int y:nums2){
           if(s1.count(y)){
            ans.insert(y);
           }
        }
        vector<int>res(ans.begin(),ans.end());
        return res;


    }
};