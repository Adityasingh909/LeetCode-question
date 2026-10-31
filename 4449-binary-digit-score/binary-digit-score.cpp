class Solution {
public:
    int calculateScore(int a, int b) {
        int ca = bitset<32>(a).count();
        int cb = bitset<32>(b).count();
        if(ca>=cb)return ca*cb;
        return cb/ca;
    }
};