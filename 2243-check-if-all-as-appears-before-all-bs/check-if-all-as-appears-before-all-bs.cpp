class Solution {
public:
    bool checkString(string s) {
       int a=0,b=0;
        for(auto x:s){
            if(x=='a')a++;
            else b++;
        }
        for(auto x:s){
            if(x=='a')a--;
            else if(x=='b'&& a!=0)return false;
        }
return true;


    }
};