class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        vector<int>arr=nums;
        long long ans= 0;
        long long c=0;
        for(int i=0;i<n;i++){
                if(arr[i]>=minK&& arr[i]<=maxK){
                    c++;
                }
                else c=0;
                ans+=c;
        }
        return ans;
    }
};