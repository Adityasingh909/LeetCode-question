class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // int c=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k)c++;
        //     }
        // }
        // return c;
        unordered_map<int,int>mpp;
    int sum =0;
    int count=0;
    mpp.insert({0,1});
    for(int i=0;i<nums.size();i++){

        sum+=nums[i];
        int rem = sum-k;
       if(mpp.find(rem)!=mpp.end()){
        count+=mpp[rem];
       }
       mpp[sum]++;
    }
    return count;
        
    }

};