class Solution {
public:

    int sumofdivison(vector<int>&nums, int divisor){
        int n = nums.size();
        int sum =0; 
        for(int i =0; i<n;i++){
            sum+= ceil(nums[i]/(double)divisor);
        }

        return sum; 
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
          int n = nums.size();
          
        

        if (n > threshold) return -1;
        int left =  1;
        int right = *max_element(nums.begin(), nums.end());
        int ans = right; 
        while(left<=right){
            int mid = left +(right-left)/2;
            
            if(sumofdivison(nums,mid)<=threshold){
                ans = min(ans,mid);
                right = mid-1; 
                
            }else{
                left = mid+1;
            }
        }
        return ans;
    }
};