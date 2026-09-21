class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long l=LLONG_MIN,sl=LLONG_MIN,tl=LLONG_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==l||nums[i]==sl||nums[i]==tl)
            continue;
            if(nums[i]>l){
                tl=sl;
                sl=l;
                l=nums[i];
            }
            else if(nums[i]<l&&nums[i]>sl){
                tl=sl;
                sl=nums[i];
            }
            else if(nums[i]<sl&&nums[i]>tl){
                tl=nums[i];
                
            }

        }
        if(tl==LLONG_MIN){
            return l;
        }
        return tl;
    }
};