class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mink=INT_MAX;
        int maxpile=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxpile=max(maxpile,piles[i]);
        }
            long long hours=0;
            int k=0;
            int answer=0;
            int low=1;
            int high=maxpile;
            while(low<=high){
                long long hours=0;
                k=(low+high)/2;
                for(int i=0;i<piles.size();i++){
                if(piles[i]%k==0){
                hours+=piles[i]/k;
            }
            else{
                hours+=(piles[i]/k)+1;
            }
            }
            if(hours<=h){
                high=k-1;
                answer=k;
            }
            else{
                low=k+1;
            }
    }
     return answer;
    }
};