class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int xo = nums[i];
            int mini = INT_MAX;
            for (int j = i; j < n; j++) {
                xo &= nums[j];
                mini = min(mini, nums[j]);
                if (mini == xo)c++;
            }
        }
        return c;
    }
};