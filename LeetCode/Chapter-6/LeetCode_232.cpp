class MyQueue {
private:
    queue<int> q;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i =0; i < q.size(); i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int res = q.front();
        q.pop();
        return res;
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
