class Solution {
public:
    string invert(string t){
        for(char &c:t){
            c = (c=='0') ? '1':'0';
        }
        return t;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=2; i<=n; i++){
            string t = s;
            string inv = invert(t);
            reverse(inv.begin(), inv.end());
            s = t + "1" + inv;
        }
        return s[k-1];
    }
    
};