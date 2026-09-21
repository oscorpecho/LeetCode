class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        int res=0;
        int freq;
        for(auto &pr:m){
            if(m.count(pr.first+1)){
                freq=m[pr.first]+m[pr.first+1];
                res=max(freq,res);
            }
            
        }
        return res;
    }
};