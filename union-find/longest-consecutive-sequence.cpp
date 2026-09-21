class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        for(int num:st){
            int len=1;
            if(st.contains(num-1)){
                continue;
            }
            else{
                while(st.contains(num+len)){
                    len++;
                }
            }
            ans=max(ans,len);
        }
        return ans;
    }
};