class Solution {
public:
    int maxPower(string s) {
        int len=1;
        int pow= 1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])len++;
            else{
                
                len=1;
            }
            pow = max(pow,len);
        }
        //  pow = max(pow,len);

        return pow;
    }
};