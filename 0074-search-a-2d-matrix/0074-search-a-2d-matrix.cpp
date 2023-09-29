class Solution {
public:
/*better appraoch applying binary search on each row */
    // bool binarySearch(vector<int> arr,int m, int k){
    //     int left =0; 
    //     int right = m-1;
    //     while(left<=right){
    //         int mid = left +(right-left)/2;

    //         if(arr[mid]==k) return true; 
    //         else if(arr[mid]>k) right = mid-1;
    //         else left = mid+1;
    //     }
    //     return false;
    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size(); 
        int m = matrix[0].size();

        /*better approach 
        for(int i =0; i<m;i++){
           // convert the bianry search function to integer type 
            // if(binarySearch(matrix[i],m,target)!=-1){
            //     return true; 
            // }
            if(matrix[i][0]<= target && target <= matrix[i][m-1]){
                return binarySearch(matrix[i],m,target);
            }
            

        }
        
        return false; 

        */

        /*Optimal approach -- flattent the 2d matrix  by not actually falattenig it */

        // to conevert 1d index to 2d index form
        // row = /m; 
        // column = %m

        int left =0;
        int right = n*m-1; 
        while(left<=right){
            int mid = left +(right-left)/2;
            int row = mid/m; 
            int col = mid%m; 
            if(matrix[row][col]==target) return true; 
            else if (matrix[row][col]<target)  left = mid+1;
            else right = mid-1; 
        }
    return false; 
    }
};