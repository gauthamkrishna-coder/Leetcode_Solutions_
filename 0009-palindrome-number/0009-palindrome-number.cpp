class Solution {
public:
    int isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long num = 0;
        long long n = x;
        while(n!=0){
            num = num*10+(n%10);
            n = n/10;
        }
        if(num==x){
            return true;
        }
        else{
            return false;
        }
    }
};