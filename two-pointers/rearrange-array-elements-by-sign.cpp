class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n1=nums.size();
        vector<int> p;
        vector<int> n;
        for(int i=0;i<n1;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }
        vector<int> result;
        for(int i=0;i<p.size();i++){
            result.push_back(p[i]);
            result.push_back(n[i]);
        }
        return result;
    }
};