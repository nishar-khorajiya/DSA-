class BrowserHistory {
public:
    stack<string> B;
    stack<string> F;

    BrowserHistory(string homepage) {
        B.push(homepage);     
    }
    
    void visit(string url) {
        while (!F.empty()) F.pop();
        B.push(url);
    }
    
    string back(int steps) {
        while (steps && B.size() > 1) {
            F.push(B.top());
            B.pop();-
            steps--;
        }
        return B.empty() ? F.top() : B.top();
    }
    
    string forward(int steps) {
        while (steps && !F.empty()) {
            B.push(F.top());
            F.pop();
            steps--;
        }
        return B.top();
    }
};
