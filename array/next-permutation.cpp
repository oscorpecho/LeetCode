class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int dip=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                dip=i-1;
                break;
            }
        }
        if(dip!=-1){
              for(int i=n-1;i>0;i--){
            if(nums[i]>nums[dip]){
              swap(nums[i],nums[dip]);
              break;
            }
        }

        }
      
        int left=dip+1;
        int right=n-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
            
    }
};