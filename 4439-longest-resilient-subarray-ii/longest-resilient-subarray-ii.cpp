class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int len=1;
        int ans=1;
        for(int i=1;i<nums.size();i++){
                int r= nums[i]%k;
                int p = nums[i-1]%k;
                if(r==p)len++;
                else len=1;
                if(((len-1)*r)%k==0){
                    ans = max(ans,len);
                }
        }
        return ans;
    }
};