class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>ans(nums.size(),-1);
        st.push(0);
        for(int i=1;i<2*nums.size();i++){
            int current=nums[i%n];
            while(!st.empty()&&current>nums[st.top()]){
                ans[st.top()]=current;
                st.pop();
            }
            if(i<nums.size()){
                st.push(i);
            }
        }
        return ans;
    }
};