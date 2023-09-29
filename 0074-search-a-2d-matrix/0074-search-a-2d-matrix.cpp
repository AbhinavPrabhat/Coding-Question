class Solution {
public:
    int binarySearch(vector<int> arr, int n, int k){
        int left =0; 
        int right = n-1;
        while(left<=right){
            int mid = left +(right-left)/2;

            if(arr[mid]==k) return mid; 
            else if(arr[mid]>k) right = mid-1;
            else left = mid+1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); 
        int n = matrix[0].size();
        for(int i =0; i<m;i++){
            if(binarySearch(matrix[i],n,target)!= -1){
            return true; 
        }

        }
        
        return false; 
    }
};