

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // stack<int> s; 
        //   map<int,int> mpp;

        // for(int i =0; i<position.size();i++){
        //     mpp[position[i]]= speed[i];
        // }

        // vector<double> v; 
        // for(auto it : mpp){
        //     double time =(double)(target-it.first)/it.second;
        //     v.push_back(time);
        // }
        
        // int fleet =0; 
        // double currtime = 0.0;
        // for(int i =v.size()-1;i>0;i--){
        //     if(v[i]<=v[i-1]){
        //         continue;
        //     } else {
        //         fleet++;
        //     }
        // }

        // return fleet + (v.size() > 0 ? 1 : 0);

map<int, double> mpp;

        for(int i =0; i<position.size();i++){
            mpp[position[i]]= (double)(target - position[i]) / speed[i];
        }

        int fleet = 0;
        double currtime = 0.0;

        for(auto it = mpp.rbegin(); it != mpp.rend(); ++it){
            if(it->second <= currtime){
                continue;
            } else {
                currtime = it->second;
                fleet++;
            }
        }

        return fleet;




    // priority_queue<vector<double>> pq; 
    // for(int i =0;i<position.size();i++){
    //     double time = (double)(target-position[i])/speed[i];
    //     pq.push({(double)position[i],(double)speed[i],time});
    // }
    //     if(pq.size()==0) return 0;
    
    
    
    



    }
};