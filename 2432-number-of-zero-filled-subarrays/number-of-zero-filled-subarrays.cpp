class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i=0;
        long long res=0;
        for(auto x:nums){
            if(x==0){
                i++;
                res+=i;
            }
            else i=0;
        }
        return res;
    }
};