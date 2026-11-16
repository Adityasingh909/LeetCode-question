class Solution {
public:
    string digitSum(string s, int k) {
        while(1) {
            int n = s.size();
            if(n <= k) return s;
            string temp;
            for(int i = 0; i < n; i += k) {
                int num = 0;
                for(int j = i; j < min(i + k, n); j++) {
                    num += (s[j] - '0');
                }
                temp += to_string(num);
            }
            s = temp; 
        }
    }
};