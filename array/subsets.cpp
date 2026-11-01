class Solution {
public:
    vector<int>curr;
    vector<vector<int>>ans;
    vector<int> numscopy;
    void backtrack(int start){
        ans.push_back(curr);
        for(int i=start;i<numscopy.size();i++){
            curr.push_back(numscopy[i]);
            backtrack(i+1);
            curr.pop_back();        
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        numscopy=nums;
        backtrack(0);
        return ans;
    }
};