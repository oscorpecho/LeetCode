class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        for(int i=0;i<m;i++){
            if(matrix[i][0]<=target&&target<=matrix[i][n-1]){
                row=i;
            }
        }
            int low=0,high=n-1;
            int mid=0;
            while(low<=high){
                mid=(low+high)/2;
                if(matrix[row][mid]==target){
                    return true;
                }
                else if(matrix[row][mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        return false;
    }
};