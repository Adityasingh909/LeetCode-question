class Solution {
public:
    long long digit(long long n) {
        long long sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d;
            n /= 10;
        }
        return sum;
    }
    string maxSumOfSquares(int n, int sum) {
        // long long s = pow(10, 1LL * n - 1);
        // long long end = pow(10, 1LL * n) - 1;
        // long long ans = 0;
        // for (long long i = end; i >= s; i--) {
        //     if (digit(i) == sum) {
        //         ans = i;
        //         break;
        //     }
        // }
        
        // if (ans == 0)
        //     return "";
        // return to_string(ans);

        if(9*n<sum)return "";
        int k =sum/9;
        int r = sum%9;
        string ans(k,'9');
        if(r>0)ans+= char('0'+r);
        ans.append(n- ans.size(),'0');
        return ans;
    }
};