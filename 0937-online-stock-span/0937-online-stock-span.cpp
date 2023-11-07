// class StockSpanner {
//     private:
//     vector<int> v; 
//     stack<pair<int,int> > s;
// public:
//     StockSpanner() {
        
//     }
    
//     int next(int price) {
//         for(int i=0;i<n;i++){
//             if(s.size()==0){
//                 v.push_back(-1);
//             }else if(s.size()>0 && s.top.first()>price){
//                 v.push_back(s.top.second());
//             }else if(s.size()>0 && s.top.first()<=price){
//                 while(s.size()>0 && s.top.first()<=price){
//                     s.pop();
//                 }
//                 if(s.size()==0) v.push_back(-1);
//                 else v.push_back(s.top.second());
//             }
//             s.push({price,i})
//         }

//         for(int i=0;i<n;i++){
//             v[i] = i-v[i]; 
//         }
//     }
//     return v;
// };

class StockSpanner {
private:
    vector<int> prices;
    stack<pair<int, int>> s;

public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while (!s.empty() && s.top().first <= price) {
            span += s.top().second;
            s.pop();
        }
        s.push({price, span});
        return span;
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */