class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int ans= 0;
        // for(int i=0;i<n;i++){
        //     int zeros= 0;
        //     int ones=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0)zeros++;
        //         else ones++;
        //         if(zeros==ones)ans= max(ans,j-i+1);
        //     }
        // }

        for(int i =0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }

    map<int,int>mpp{{0,-1}};
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mpp.count(sum)){
                ans=max(ans,i-mpp[sum]);
                
            }
            else mpp[sum]=i;

        }


        return ans;
    }
};