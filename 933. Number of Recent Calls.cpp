class RecentCounter {
    queue<int>q;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
          int ti=t-3000;
        q.push(t);
        while(q.front()<ti)
            q.pop();
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
