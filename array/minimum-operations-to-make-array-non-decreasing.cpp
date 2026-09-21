class Solution {
public:
    long long minOperations(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size()-1;i++){
            long long diff=0;
            if(nums[i]>nums[i+1]){
                diff=nums[i]-nums[i+1];
                ans=ans+diff;
            }
        }
        return ans;
    }
};