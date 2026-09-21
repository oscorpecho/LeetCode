class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxs=INT_MIN;
        int mins=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mins=min(mins,nums[i]);
            maxs=max(maxs,nums[i]);
        }
        vector<int>numss;
        for(int i=mins;i<=maxs;i++){
            numss.push_back(i);
        }
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        vector<int>a;
        for(int n:numss){
            if(!st.contains(n)){
                a.push_back(n);
            }
        }
        return a;
    }
};