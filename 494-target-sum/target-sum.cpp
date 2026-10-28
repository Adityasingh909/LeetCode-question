class Solution {
public:
    int c = 0;

    void solve(int ind,int target,int sum,vector<int>&arr,int n){
        if (ind==n){
            if (sum==target){
                c++;
            }
            return;
        }

        solve(ind+1,target,sum + arr[ind],arr,n);
        solve(ind+1,target,sum - arr[ind],arr,n);

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        solve(0,target,0,nums,n);

        return c;
    }
};