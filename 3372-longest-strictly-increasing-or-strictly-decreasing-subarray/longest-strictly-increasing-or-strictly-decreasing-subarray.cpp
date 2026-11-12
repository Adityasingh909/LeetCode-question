class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        // int a =INT_MIN;
        // int b=INT_MIN;
        // int n = arr.size();
        // for(int i=0;i<n;i++){
        //     int inc = 1;
        //     for(int j=i;j<n-1;j++){
        //         if(arr[j+1]>arr[j])inc++;
        //         else break;
        //     }
        //     a = max(a,inc);
        // }
        // for(int i=0;i<n;i++){
        //     int dec = 1;
        //     for(int j=i;j<n-1;j++){
        //         if(arr[j+1]<arr[j])dec++;
        //         else break;
        //     }
        //     b = max(b,dec);
        // }
        // return max(a,b);

        int n=nums.size(), i=0, ans=0;
        int inc=1, dec=1;
        if (n==1) return 1;
        for(i=1 ;i<n; i++){
            if (nums[i]>nums[i-1]) inc++, dec=1;
            else if (nums[i]<nums[i-1]) inc=1, dec++;
            else inc=dec=1;
            ans=max({ans, dec, inc});
        } 
        return ans;   
    }
};