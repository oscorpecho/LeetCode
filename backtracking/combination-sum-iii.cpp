class Solution {
public:    
vector<vector<int>>res; 
    void backtrack(vector<int>&nums,vector<int>&path,int start,int n,int k){
        if(n<0){
            return;
        }
        if(path.size()==k&&n==0)
        {
            res.push_back(path);
            return;
        }
        for(int i=start;i<nums.size();i++){
            path.push_back(nums[i]);
            backtrack(nums,path,i+1,n-nums[i],k);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<int>nums;
    vector<int>path;
    for(int i=1;i<10;i++){
        nums.push_back(i);
    }
    backtrack(nums,path,0,n,k);
    return res;
    }
};