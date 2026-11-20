class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        for(int x:arr)mpp[x]++;
        int c=0;
         vector<int> counts;

        for (auto it : mpp){
            counts.push_back(it.second);
        }
         sort(counts.begin(),counts.end());

        
        int unique = counts.size();

        for (int freq : counts){
            if (k>=freq){
                k-=freq;
                unique--;
            }
            else{
                break;
            }
        }
    
        return unique;
    }
};

// 1 1 2  3 3 3 4
// 1 -> 2
// 2 -> 1
// 3 -> 3
// 3 -> 1