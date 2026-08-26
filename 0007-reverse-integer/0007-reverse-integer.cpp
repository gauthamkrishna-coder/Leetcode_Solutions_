class Solution {
public:
    int reverse(int x) {
        long long digit = 0;
        while(x!=0){
            digit = digit*10 + (x%10);
            x = x/10;
        }
        if(digit>=INT_MIN && digit<=INT_MAX){
                return digit;
        }
        else{
            return 0;
        }
    }
};