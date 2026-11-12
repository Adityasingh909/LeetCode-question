class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int a =INT_MIN;
        int b=INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int inc = 1;
            for(int j=i;j<n-1;j++){
                if(arr[j+1]>arr[j])inc++;
                else break;
            }
            a = max(a,inc);
        }
        for(int i=0;i<n;i++){
            int dec = 1;
            for(int j=i;j<n-1;j++){
                if(arr[j+1]<arr[j])dec++;
                else break;
            }
            b = max(b,dec);
        }
        return max(a,b);
    }
};