class MinStack {
public:
stack<long long>st;
long long mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        if(value<mini){
            st.push(2LL*value-mini);
            mini=value;
        }
        else{
            st.push(value);
        }
    }
    
    void pop() {
        if(!st.empty()){
            if(st.top()<mini){
                mini=(2LL*mini)-st.top();
                st.pop();
            }
            else{
                st.pop();
            }
        }
    }
    
    int top() {
        if(!st.empty()){
            if(st.top()<mini){
                return mini;
            }
            else{
                return st.top();
            }
        }
        else{
            return -1;
        }
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */