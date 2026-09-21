class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,maxp=0,p=0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                p=prices[r]-prices[l];
                maxp=max(maxp,p);
            }
            else{
                l=r;
            }
            r++;
        }
        return maxp;
    }
};