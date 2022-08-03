class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(empty()) return -1;
        int size = q1.size()-1;
        int ans = q1.back();
        while(size--){
            q2.push(q1.front());
            q1.pop();
        }
        q1 = q2;
        q2 = {};
        return ans;
    }
    
    int top() {
        if(q1.size()==0)
            return -1;
        return q1.back();
    }
    
    bool empty() {
        if(q1.size()==0)
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */