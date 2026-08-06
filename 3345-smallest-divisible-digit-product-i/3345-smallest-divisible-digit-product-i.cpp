class Solution {
public:
    int product(int n){
        int prod = 1;
        while(n!=0){
            int num = n%10;
            prod *= num;
            n = n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i=n; i<=100; i++){
            int prod = product(i);
            if(i>=n && prod%t==0){
                return i;
            }
        }
        return 0;
    }
    
};