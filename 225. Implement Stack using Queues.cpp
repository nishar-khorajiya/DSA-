class MyStack {
    deque<int> stack;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        int top=stack.back();
        stack.pop_back();
        return top;
       
    }
    
    int top() {
         int top=stack.back();
         return top;
    }
    
    bool empty() {
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
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
