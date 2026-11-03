class Solution {
public:
    int minMoves(vector<int>& nums) {
        int c=0;
        int maxi = *max_element(nums.begin(),nums.end());
        for(int x:nums){
            c+=maxi-x;
        }
        return c;

    }
};