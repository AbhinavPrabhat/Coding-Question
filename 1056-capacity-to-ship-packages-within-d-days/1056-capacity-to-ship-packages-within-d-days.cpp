class Solution {
public:
    int nod(vector<int>&weights, int capacity){
        int days = 1; 
        int load =0;
        for(int i =0; i<weights.size();i++){
            if(load+weights[i]>capacity){
                days = days+1;
                load = weights[i];
            }else{
                load = load+weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int left = *max_element(weights.begin(),weights.end());
        int sum =0;
        for(int i =0;i<n;i++){
            sum+=weights[i];
        }
        int right = sum;
        while(left<=right){
            int mid = left+(right-left)/2;

            if(nod(weights, mid)>days){
                left= mid+1;
            }else{
                right = mid-1; 
            }
        }
        return left;
    }
};