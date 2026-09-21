class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        for(auto &pr:m){
            if(pr.second>(n/2))
            return pr.first;
        }
        return -1; 
    }
};