class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        int n = arr.size();
        vector<int>nums;
        for (int i = 0; i < n; i++) {
            nums.push_back(abs(arr[i]));
        }
        if(n==1)return nums[0]*nums[0];

        sort(nums.begin(), nums.end());
        
        long long add=0, sub=0;
       
            for(int i =0;i<n/2;i++){
               sub += 1LL *nums[i] * nums[i];
            }
            for(int i=n/2;i<n;i++){
                    add += 1LL*nums[i] * nums[i];
            }
            return add-sub;
    }
};