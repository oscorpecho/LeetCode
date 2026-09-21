class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0,sum=0,diff=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            diff=sum-k;
            if(mp.find(diff)!=mp.end()){
                ans+=mp[diff];
            }
                mp[sum]++;
        }
        return ans;
    }
};