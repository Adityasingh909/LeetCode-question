class Solution {
public:
    int maxPower(string s) {
        int len=1;
        int pow= 1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])len++;
            else{
                pow = max(pow,len);
                len=1;
            }
        }
         pow = max(pow,len);
        // if(s[n-1]==s[n-2])
        return pow;
    }
};