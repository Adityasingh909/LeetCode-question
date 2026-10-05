class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int>temp;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i] + nums[j] == target){
    //                 temp.push_back(i);
    //                 temp.push_back(j);
    //                 break;
    //             }
    //         }
    //     }
    //    return temp; 
    map<int ,int>mpp;

    for(int i=0;i<nums.size();i++){
        int a = nums[i];
        int extra = target - a;
        if(mpp.find(extra)!=mpp.end()){
            return {mpp[extra] ,i};
        }
        mpp[a] = i;
    }
    return {};
    }
};