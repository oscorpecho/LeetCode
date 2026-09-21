class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       int j=n-1;
       int k=n-1;
       vector<int>p(n);
       while(i<j||i==j){
        int l=nums[i]*nums[i];
        int r=nums[j]*nums[j];
        if(l>r){
            p[k]=l;
            i++;
        }
        else{
            p[k]=r;
            j--;
        }
        k--;
       } 
       return p; 
    }
};