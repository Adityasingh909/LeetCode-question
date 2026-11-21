class Solution {
public:
    int minRange(int a, int b, int c) {
        int maxi = max({a,b,c});
        if(maxi>a+b+c-maxi){
            if(maxi==a){
                a= b+c;
            }
            else if(maxi==b){
                b = a+c;
            }
            else c =a+b;
        }
        return max({a,b,c})-min({a,b,c});
    }
};