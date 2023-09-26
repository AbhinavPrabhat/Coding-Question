class Solution {
public:

    bool possible(vector<int>&bloomDay,int day, int m, int k){
        int cnt =0;
        int nob= 0; 
        for(int i =0; i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }else{
                nob +=(cnt/k);
                cnt =0;
            }
        }
        nob += (cnt/k);
        return nob>=m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
         int n = bloomDay.size();

        long long int val = m*1LL*k*1LL;
        if(val>n) return -1; 

        
        int mini = INT_MAX; 
        int maxi = INT_MIN; 
        for(int i =0; i<n;i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }
/*
        for(int i = mini; i<=maxi;i++){
            if(possible(bloomDay,i,m,k)){
                return i; 
            }
        }
*/

    /*Optimal approach using binary search */

    int ans = INT_MAX; 
    int left =mini;
    int right = maxi;

    while(left<=right){
        int mid = left +(right-left)/2;

        if(possible(bloomDay,mid,m,k)){
            ans = min(ans,mid);
            right = mid-1; 
        }else{
            left = mid+1;
        }
    }
        
        return ans;
        

    }
};