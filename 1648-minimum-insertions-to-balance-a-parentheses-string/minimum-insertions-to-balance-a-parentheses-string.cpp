class Solution {
public:
    int minInsertions(string s) {
        int p=0,k=0;
        for(int i=0;i<s.length();i++){
            char c= s[i];
            if(c == '('){
                p+=2;
                if(p%2==1){
                    p--;
                    k++;
                }
            }
            else{
                p--;
                if(p<0){
                    p+=2;
                    k++;
                }
            }
        }
        return p+k;
    }
};