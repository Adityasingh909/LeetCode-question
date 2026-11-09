class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;

        if(finalSum%2!=0)return ans;
        long long sum=2;
        while(finalSum>=sum){
            ans.push_back(sum);
            finalSum-=sum;
            sum+=2;
        }
        if(finalSum>0)ans.back()+=finalSum; 
        return ans;
    }
};