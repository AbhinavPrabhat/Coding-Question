class Solution {
public:
/*Function for better appraoch 
    bool binarysearch(vector<int> nums, int m, int k){
        int left = 0; 
        int right = m-1; 
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==k) return true; 
            else if(nums[mid]<k) left = mid+1; 
            else right = mid-1; 
        }
        return false; 
    }
*/
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n = matrix.size();
         int m = matrix[0].size(); 
/*Brute force approach
         for(int i =0; i<n;i++){
             for(int j=0;j<m;j++){
                 if(matrix[i][j]==target){
                     return true; 
                 }
             }
         }
         return false; 

*/
    /*Better solution using binanry search

    for(int i =0; i<n;i++){
        bool flag = binarysearch(matrix[i],m,target);
        if(flag) return true; 
    }
    return false; 

*/


    /*Optimal approach*/

    int row =0; 
    int col = m-1;
    while(row<n && col >=0){
        if(matrix[row][col]== target) return true; 
        else if(matrix[row][col]< target) row++;
        else col--;
    }
    return false;
    }


};