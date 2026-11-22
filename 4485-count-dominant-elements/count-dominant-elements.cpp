class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n= nums.size();
        if(nums.size()==1)return 1;
        int d=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i]>=nums[i+1])d++;
            }
            else if(i==n-1){
                 if(nums[i]>=nums[i-1])d++;
            }
            else {
            float avg = (nums[i-1]+nums[i+1])/2.0;
            if(nums[i]>=avg)d++;
            }
        }
        return d;
    }
};