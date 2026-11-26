class Solution {
public:
    bool canAliceWin(int n) {
        int s= 10;
        bool a=true;
        while(n>=s){
            n= n-s;
            s--;
            a=!a;
        }
        return !a;
    }
};