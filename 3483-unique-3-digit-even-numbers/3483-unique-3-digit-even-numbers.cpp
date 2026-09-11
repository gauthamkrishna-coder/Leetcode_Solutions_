class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt = 0;
        set<int> st;
        for(int i=0; i<digits.size(); i++){
            if(digits[i]==0){
                continue;
            }
            for(int j=0; j<digits.size(); j++){
                if(i==j){
                    continue;
                }
                for(int k=0; k<digits.size(); k++){
                    if(k==j || k==i){
                        continue;
                    }
                    if(digits[k]%2==0){
                        int num = digits[i]*100 + digits[j]*10 + digits[k];
                        st.insert(num);
                    }
                }
            }
        }
        return st.size();
    }
};