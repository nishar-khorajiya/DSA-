lass Solution {
public:
   
    int calculate(int n){
        if(n<=1) 
            return n;
        return calculate(n-2)+calculate(n-1);
    }
   
    int fib(int n) {
        int sum=calculate(n);
        return sum;
    }
};
