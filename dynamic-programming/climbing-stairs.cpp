class Solution {
public:
    vector<int>dp;
    int climbStairs(int n) {
        dp.assign(n+1,0);
        return solve(n);
    }
    int solve(int n){
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(dp[n]!=0){
            return dp[n];
        }
        return dp[n]=solve(n-1)+solve(n-2);
    }
};