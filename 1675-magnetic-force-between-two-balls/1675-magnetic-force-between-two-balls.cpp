class Solution {
public:

    bool canWePlace(vector<int> & position, int dist, int basket){
        int cntBasket =1; 
        int last = position[0];
        for(int i =0;i<position.size();i++){
            if(position[i]-last>=dist){
                cntBasket++;
                last = position[i];
            }
            if(cntBasket>=basket) return true;

        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int left =1; 
        int right = position[n-1]-position[0];
        while(left<=right){
            int mid = left+(right-left)/2;
            if(canWePlace(position,mid,m)==true){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return right; 
    }
};