class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string,int> mpp;

        for (auto &s : nums){
            mpp[s]++;
        }

        int ans = 0;

        for (auto &s : nums){
            if (target.size()<=s.size()){
                continue;
            }

            if (target.substr(0,s.size())==s){
                string rem = target.substr(s.size());

                ans += mpp[rem];
                if (rem == s){
                    ans--;
                }
            }
        }

        return ans;
    }
};