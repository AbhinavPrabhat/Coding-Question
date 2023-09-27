class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // brute force 
/*
        int n = arr.size();
        for(int i =0;i<n;i++){
            if(arr[i]<=k){
                k++;
            }else{
                break;
            }
        }
        return k;
*/

// ans = arr[right]+more
// more = k-missing 
// missing = arr[high]-(high+1);
// ans = arr[high]+ k-(arr[high]-high-1)
// ans = k+high+1

int n = arr.size();
int left = 0; int right = n-1;
while(left<=right){
    int mid = left + (right-left)/2;
    int missing = arr[mid]-(mid+1);
    if(missing<k){
        left = mid+1;
    }else{
        right = mid-1; 
    }

}
return k+right+1; // low +k
    }
};