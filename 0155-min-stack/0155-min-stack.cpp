class MinStack {
    private:
    long long minElem;
    stack<long long> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.size()==0){
            s.push(val);
            minElem= val;
        }else{
            if(val>=minElem){
                s.push(val);
            }else if(val <= minElem){
                s.push(2LL*val-minElem);
                minElem = val; 
            }
        }
    }
    
    void pop() {
        if(s.size()==0){
            return; 
        }else{
            if(s.top()>=minElem){
                s.pop();
            }else if(s.top()<minElem){
                minElem = 2LL*minElem-s.top();
                s.pop();
            }
        }
        
    }
    
    int top() {
        if(s.size()==0){
            return -1;
        }else{
            if(s.top()<minElem){
                return minElem;
            }else{
                return s.top();
            }
        }
        
    }
    
    int getMin() {
        if(s.size()==0){
            return -1;
        }
        return minElem;
    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */